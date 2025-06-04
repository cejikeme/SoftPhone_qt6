#ifndef FILE_ITERATOR_INTERFACE_H
#define FILE_ITERATOR_INTERFACE_H

#include <string>
#include <vector>

#include "FileItem.h"
#include "ConfigException.h"

class FileIteratorInterface
{
public:
    virtual ~FileIteratorInterface(){}

    virtual bool isLoaded() const = 0;

    // Throws ItemNotFoundException if item is not found.
    virtual FileItem getItemByKey(std::string const& key) = 0;

    // Throws ItemNotFoundException if item is not found.
    virtual FileItem getItemByKey(std::string const& section, std::string const& key) = 0;

    // Throws SectionNotFoundException if section is not found.
    virtual std::string getSectionByKey(std::string const& key) = 0;

    // Throws SectionNotFoundException if section is not found.
    virtual void getItemsBySection(std::string const& section, std::vector<FileItem>& fileItems) = 0;
};

#endif // FILE_ITERATOR_INTERFACE_H

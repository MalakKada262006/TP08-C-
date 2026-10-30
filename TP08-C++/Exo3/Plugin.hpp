#ifndef PLUGIN_HPP
#define PLUGIN_HPP

#include <string>
#include <memory>

class Plugin {
public:
    virtual ~Plugin() = default;

    virtual std::string nom() const = 0;
    virtual std::string traiter(const std::string& texte) = 0;

    static std::unique_ptr<Plugin> creerPlugin(const std::string& type);
};

#endif

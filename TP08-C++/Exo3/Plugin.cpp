#include "Plugin.hpp"
#include "CorrecteurOrthographique.hpp"
#include "TraducteurAnglais.hpp"
#include "AnalyseurStyle.hpp"

std::unique_ptr<Plugin> Plugin::creerPlugin(const std::string& type) {
    if (type == "correcteur") {
        return std::make_unique<CorrecteurOrthographique>();
    } else if (type == "traducteur") {
        return std::make_unique<TraducteurAnglais>();
    } else if (type == "analyseur") {
        return std::make_unique<AnalyseurStyle>();
    }
    return nullptr;
}

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConfigurationSection__Class.h>
#include <Modloader/app/structs/ConfigurationSection.h>

namespace app::classes::types {
    namespace ConfigurationSection {
        namespace {
            inline app::ConfigurationSection__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationSection__Class** type_info = &type_info_ref;
        inline app::ConfigurationSection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSection__Class>(type_info, "System.Configuration", "ConfigurationSection");
        }
        inline app::ConfigurationSection* create() {
            return il2cpp::create_object<app::ConfigurationSection>(get_class());
        }
    } // namespace ConfigurationSection
} // namespace app::classes::types

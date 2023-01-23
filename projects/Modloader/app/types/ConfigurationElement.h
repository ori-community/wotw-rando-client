#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConfigurationElement__Class.h>
#include <Modloader/app/structs/ConfigurationElement.h>

namespace app::classes::types {
    namespace ConfigurationElement {
        namespace {
            inline app::ConfigurationElement__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationElement__Class** type_info = &type_info_ref;
        inline app::ConfigurationElement__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElement__Class>(type_info, "System.Configuration", "ConfigurationElement");
        }
        inline app::ConfigurationElement* create() {
            return il2cpp::create_object<app::ConfigurationElement>(get_class());
        }
    } // namespace ConfigurationElement
} // namespace app::classes::types

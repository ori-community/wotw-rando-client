#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConfigurationElementCollection__Class.h>
#include <Modloader/app/structs/ConfigurationElementCollection.h>

namespace app::classes::types {
    namespace ConfigurationElementCollection {
        namespace {
            inline app::ConfigurationElementCollection__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationElementCollection__Class** type_info = &type_info_ref;
        inline app::ConfigurationElementCollection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationElementCollection__Class>(type_info, "System.Configuration", "ConfigurationElementCollection");
        }
        inline app::ConfigurationElementCollection* create() {
            return il2cpp::create_object<app::ConfigurationElementCollection>(get_class());
        }
    } // namespace ConfigurationElementCollection
} // namespace app::classes::types

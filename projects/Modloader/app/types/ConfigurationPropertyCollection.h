#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfigurationPropertyCollection {
        namespace {
            inline app::ConfigurationPropertyCollection__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationPropertyCollection__Class** type_info = &type_info_ref;
        inline app::ConfigurationPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationPropertyCollection__Class>(type_info, "System.Configuration", "ConfigurationPropertyCollection");
        }
        inline app::ConfigurationPropertyCollection* create() {
            return il2cpp::create_object<app::ConfigurationPropertyCollection>(get_class());
        }
    } // namespace ConfigurationPropertyCollection
} // namespace app::classes::types

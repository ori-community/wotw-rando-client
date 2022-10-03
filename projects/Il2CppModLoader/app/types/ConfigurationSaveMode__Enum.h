#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigurationSaveMode__Enum {
        namespace {
            app::ConfigurationSaveMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ConfigurationSaveMode__Enum__Class** type_info = &type_info_ref;
        inline app::ConfigurationSaveMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSaveMode__Enum__Class>(type_info, "System.Configuration", "ConfigurationSaveMode");
        }
        inline app::ConfigurationSaveMode__Enum* create() {
            return il2cpp::create_object<app::ConfigurationSaveMode__Enum>(get_class());
        }
    } // namespace ConfigurationSaveMode__Enum
} // namespace app::classes::types

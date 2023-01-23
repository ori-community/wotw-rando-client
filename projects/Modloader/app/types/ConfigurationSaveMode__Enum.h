#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum__Class.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum.h>

namespace app::classes::types {
    namespace ConfigurationSaveMode__Enum {
        namespace {
            inline app::ConfigurationSaveMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ConfigurationSaveMode__Enum__Class** type_info = &type_info_ref;
        inline app::ConfigurationSaveMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfigurationSaveMode__Enum__Class>(type_info, "System.Configuration", "ConfigurationSaveMode");
        }
        inline app::ConfigurationSaveMode__Enum* create() {
            return il2cpp::create_object<app::ConfigurationSaveMode__Enum>(get_class());
        }
    } // namespace ConfigurationSaveMode__Enum
} // namespace app::classes::types

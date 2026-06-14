#pragma once
#include <Modloader/app/structs/RegistryValueOptions__Enum.h>
#include <Modloader/app/structs/RegistryValueOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegistryValueOptions__Enum {
        inline app::RegistryValueOptions__Enum__Class** type_info() {
            static app::RegistryValueOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegistryValueOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegistryValueOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegistryValueOptions__Enum__Class>(type_info(), "Microsoft.Win32", "RegistryValueOptions");
        }
        inline app::RegistryValueOptions__Enum* create() {
            return il2cpp::create_object<app::RegistryValueOptions__Enum>(get_class());
        }
    } // namespace RegistryValueOptions__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/RijndaelManagedTransformMode__Enum.h>
#include <Modloader/app/structs/RijndaelManagedTransformMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RijndaelManagedTransformMode__Enum {
        inline app::RijndaelManagedTransformMode__Enum__Class** type_info() {
            static app::RijndaelManagedTransformMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RijndaelManagedTransformMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RijndaelManagedTransformMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RijndaelManagedTransformMode__Enum__Class>(type_info(), "System.Security.Cryptography", "RijndaelManagedTransformMode");
        }
        inline app::RijndaelManagedTransformMode__Enum* create() {
            return il2cpp::create_object<app::RijndaelManagedTransformMode__Enum>(get_class());
        }
    } // namespace RijndaelManagedTransformMode__Enum
} // namespace app::classes::types

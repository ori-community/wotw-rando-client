#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RijndaelManagedTransformMode__Enum__Class.h>
#include <Modloader/app/structs/RijndaelManagedTransformMode__Enum.h>

namespace app::classes::types {
    namespace RijndaelManagedTransformMode__Enum {
        namespace {
            inline app::RijndaelManagedTransformMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RijndaelManagedTransformMode__Enum__Class** type_info = &type_info_ref;
        inline app::RijndaelManagedTransformMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RijndaelManagedTransformMode__Enum__Class>(type_info, "System.Security.Cryptography", "RijndaelManagedTransformMode");
        }
        inline app::RijndaelManagedTransformMode__Enum* create() {
            return il2cpp::create_object<app::RijndaelManagedTransformMode__Enum>(get_class());
        }
    } // namespace RijndaelManagedTransformMode__Enum
} // namespace app::classes::types

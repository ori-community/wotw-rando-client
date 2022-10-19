#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FromBase64TransformMode__Enum {
        namespace {
            inline app::FromBase64TransformMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FromBase64TransformMode__Enum__Class** type_info = &type_info_ref;
        inline app::FromBase64TransformMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FromBase64TransformMode__Enum__Class>(type_info, "System.Security.Cryptography", "FromBase64TransformMode");
        }
        inline app::FromBase64TransformMode__Enum* create() {
            return il2cpp::create_object<app::FromBase64TransformMode__Enum>(get_class());
        }
    } // namespace FromBase64TransformMode__Enum
} // namespace app::classes::types

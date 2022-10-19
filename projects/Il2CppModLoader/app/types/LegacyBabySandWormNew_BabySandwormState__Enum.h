#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyBabySandWormNew_BabySandwormState__Enum {
        namespace {
            inline app::LegacyBabySandWormNew_BabySandwormState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LegacyBabySandWormNew_BabySandwormState__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyBabySandWormNew_BabySandwormState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyBabySandWormNew_BabySandwormState__Enum__Class>(type_info, "", "LegacyBabySandWormNew", "BabySandwormState");
        }
        inline app::LegacyBabySandWormNew_BabySandwormState__Enum* create() {
            return il2cpp::create_object<app::LegacyBabySandWormNew_BabySandwormState__Enum>(get_class());
        }
    } // namespace LegacyBabySandWormNew_BabySandwormState__Enum
} // namespace app::classes::types

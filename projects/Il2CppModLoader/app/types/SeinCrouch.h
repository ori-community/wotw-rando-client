#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinCrouch {
        namespace {
            inline app::SeinCrouch__Class* type_info_ref = nullptr;
        }
        inline app::SeinCrouch__Class** type_info = &type_info_ref;
        inline app::SeinCrouch__Class* get_class() {
            return il2cpp::get_class<app::SeinCrouch__Class>(type_info, "", "SeinCrouch");
        }
        inline app::SeinCrouch* create() {
            return il2cpp::create_object<app::SeinCrouch>(get_class());
        }
    } // namespace SeinCrouch
} // namespace app::classes::types

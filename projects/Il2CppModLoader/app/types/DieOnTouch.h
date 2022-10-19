#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DieOnTouch {
        namespace {
            inline app::DieOnTouch__Class* type_info_ref = nullptr;
        }
        inline app::DieOnTouch__Class** type_info = &type_info_ref;
        inline app::DieOnTouch__Class* get_class() {
            return il2cpp::get_class<app::DieOnTouch__Class>(type_info, "", "DieOnTouch");
        }
        inline app::DieOnTouch* create() {
            return il2cpp::create_object<app::DieOnTouch>(get_class());
        }
    } // namespace DieOnTouch
} // namespace app::classes::types

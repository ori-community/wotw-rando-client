#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrabRope {
        namespace {
            inline app::SeinGrabRope__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrabRope__Class** type_info = &type_info_ref;
        inline app::SeinGrabRope__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabRope__Class>(type_info, "", "SeinGrabRope");
        }
        inline app::SeinGrabRope* create() {
            return il2cpp::create_object<app::SeinGrabRope>(get_class());
        }
    } // namespace SeinGrabRope
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrabBlock {
        namespace {
            inline app::SeinGrabBlock__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrabBlock__Class** type_info = &type_info_ref;
        inline app::SeinGrabBlock__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabBlock__Class>(type_info, "", "SeinGrabBlock");
        }
        inline app::SeinGrabBlock* create() {
            return il2cpp::create_object<app::SeinGrabBlock>(get_class());
        }
    } // namespace SeinGrabBlock
} // namespace app::classes::types

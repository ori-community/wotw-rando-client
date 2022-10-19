#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpGrid {
        namespace {
            inline app::JumpGrid__Class* type_info_ref = nullptr;
        }
        inline app::JumpGrid__Class** type_info = &type_info_ref;
        inline app::JumpGrid__Class* get_class() {
            return il2cpp::get_class<app::JumpGrid__Class>(type_info, "", "JumpGrid");
        }
        inline app::JumpGrid* create() {
            return il2cpp::create_object<app::JumpGrid>(get_class());
        }
    } // namespace JumpGrid
} // namespace app::classes::types

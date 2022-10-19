#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoShootBehaviour {
        namespace {
            inline app::SkeetoShootBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoShootBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoShootBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoShootBehaviour__Class>(type_info, "", "SkeetoShootBehaviour");
        }
        inline app::SkeetoShootBehaviour* create() {
            return il2cpp::create_object<app::SkeetoShootBehaviour>(get_class());
        }
    } // namespace SkeetoShootBehaviour
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormThrownBehaviour {
        namespace {
            inline app::SandWormThrownBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormThrownBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormThrownBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormThrownBehaviour__Class>(type_info, "", "SandWormThrownBehaviour");
        }
        inline app::SandWormThrownBehaviour* create() {
            return il2cpp::create_object<app::SandWormThrownBehaviour>(get_class());
        }
    } // namespace SandWormThrownBehaviour
} // namespace app::classes::types

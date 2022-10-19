#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormReturnToSandBehaviour {
        namespace {
            inline app::SandWormReturnToSandBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormReturnToSandBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormReturnToSandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormReturnToSandBehaviour__Class>(type_info, "", "SandWormReturnToSandBehaviour");
        }
        inline app::SandWormReturnToSandBehaviour* create() {
            return il2cpp::create_object<app::SandWormReturnToSandBehaviour>(get_class());
        }
    } // namespace SandWormReturnToSandBehaviour
} // namespace app::classes::types

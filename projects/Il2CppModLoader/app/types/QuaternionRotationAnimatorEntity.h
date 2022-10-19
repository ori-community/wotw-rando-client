#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuaternionRotationAnimatorEntity {
        inline app::QuaternionRotationAnimatorEntity__Class** type_info = (app::QuaternionRotationAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04791AB0));
        inline app::QuaternionRotationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::QuaternionRotationAnimatorEntity__Class>(type_info, "Moon.Timeline", "QuaternionRotationAnimatorEntity");
        }
        inline app::QuaternionRotationAnimatorEntity* create() {
            return il2cpp::create_object<app::QuaternionRotationAnimatorEntity>(get_class());
        }
    } // namespace QuaternionRotationAnimatorEntity
} // namespace app::classes::types

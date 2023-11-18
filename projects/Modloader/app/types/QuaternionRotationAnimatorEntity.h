#pragma once
#include <Modloader/app/structs/QuaternionRotationAnimatorEntity.h>
#include <Modloader/app/structs/QuaternionRotationAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuaternionRotationAnimatorEntity {
        inline app::QuaternionRotationAnimatorEntity__Class** type_info() {
            static app::QuaternionRotationAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuaternionRotationAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04791AB0));
            }
            return cache;
        }
        inline app::QuaternionRotationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::QuaternionRotationAnimatorEntity__Class>(type_info(), "Moon.Timeline", "QuaternionRotationAnimatorEntity");
        }
        inline app::QuaternionRotationAnimatorEntity* create() {
            return il2cpp::create_object<app::QuaternionRotationAnimatorEntity>(get_class());
        }
    } // namespace QuaternionRotationAnimatorEntity
} // namespace app::classes::types

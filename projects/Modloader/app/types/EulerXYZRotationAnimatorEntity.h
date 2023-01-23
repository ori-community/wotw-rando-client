#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EulerXYZRotationAnimatorEntity__Class.h>
#include <Modloader/app/structs/EulerXYZRotationAnimatorEntity.h>

namespace app::classes::types {
    namespace EulerXYZRotationAnimatorEntity {
        inline app::EulerXYZRotationAnimatorEntity__Class** type_info = (app::EulerXYZRotationAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04719EE8));
        inline app::EulerXYZRotationAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::EulerXYZRotationAnimatorEntity__Class>(type_info, "Moon.Timeline", "EulerXYZRotationAnimatorEntity");
        }
        inline app::EulerXYZRotationAnimatorEntity* create() {
            return il2cpp::create_object<app::EulerXYZRotationAnimatorEntity>(get_class());
        }
    } // namespace EulerXYZRotationAnimatorEntity
} // namespace app::classes::types

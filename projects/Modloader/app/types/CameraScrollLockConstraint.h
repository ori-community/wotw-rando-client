#pragma once
#include <Modloader/app/structs/CameraScrollLockConstraint.h>
#include <Modloader/app/structs/CameraScrollLockConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraScrollLockConstraint {
        inline app::CameraScrollLockConstraint__Class** type_info() {
            static app::CameraScrollLockConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraScrollLockConstraint__Class**)(modloader::win::memory::resolve_rva(0x0477D3D0));
            }
            return cache;
        }
        inline app::CameraScrollLockConstraint__Class* get_class() {
            return il2cpp::get_class<app::CameraScrollLockConstraint__Class>(type_info(), "", "CameraScrollLockConstraint");
        }
        inline app::CameraScrollLockConstraint* create() {
            return il2cpp::create_object<app::CameraScrollLockConstraint>(get_class());
        }
    } // namespace CameraScrollLockConstraint
} // namespace app::classes::types

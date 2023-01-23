#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyAccelerationDelegate__Class.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyAccelerationDelegate.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_ModifyAccelerationDelegate {
        inline app::KwolokBossLocomotion_ModifyAccelerationDelegate__Class** type_info = (app::KwolokBossLocomotion_ModifyAccelerationDelegate__Class**)(modloader::win::memory::resolve_rva(0x0473F0C0));
        inline app::KwolokBossLocomotion_ModifyAccelerationDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_ModifyAccelerationDelegate__Class>(type_info, "", "KwolokBossLocomotion", "ModifyAccelerationDelegate");
        }
        inline app::KwolokBossLocomotion_ModifyAccelerationDelegate* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_ModifyAccelerationDelegate>(get_class());
        }
    } // namespace KwolokBossLocomotion_ModifyAccelerationDelegate
} // namespace app::classes::types

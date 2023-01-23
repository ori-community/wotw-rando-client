#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoLocomotion__Class.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>

namespace app::classes::types {
    namespace SkeetoLocomotion {
        inline app::SkeetoLocomotion__Class** type_info = (app::SkeetoLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04715300));
        inline app::SkeetoLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SkeetoLocomotion__Class>(type_info, "Moon", "SkeetoLocomotion");
        }
        inline app::SkeetoLocomotion* create() {
            return il2cpp::create_object<app::SkeetoLocomotion>(get_class());
        }
    } // namespace SkeetoLocomotion
} // namespace app::classes::types

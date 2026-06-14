#pragma once
#include <Modloader/app/structs/SkeetoLocomotion_c.h>
#include <Modloader/app/structs/SkeetoLocomotion_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoLocomotion_c {
        inline app::SkeetoLocomotion_c__Class** type_info() {
            static app::SkeetoLocomotion_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoLocomotion_c__Class**)(modloader::win::memory::resolve_rva(0x04718680));
            }
            return cache;
        }
        inline app::SkeetoLocomotion_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoLocomotion_c__Class>(type_info(), "Moon", "SkeetoLocomotion", "<>c");
        }
        inline app::SkeetoLocomotion_c* create() {
            return il2cpp::create_object<app::SkeetoLocomotion_c>(get_class());
        }
    } // namespace SkeetoLocomotion_c
} // namespace app::classes::types

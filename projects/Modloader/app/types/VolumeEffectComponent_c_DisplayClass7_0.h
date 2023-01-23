#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumeEffectComponent_c_DisplayClass7_0__Class.h>
#include <Modloader/app/structs/VolumeEffectComponent_c_DisplayClass7_0.h>

namespace app::classes::types {
    namespace VolumeEffectComponent_c_DisplayClass7_0 {
        inline app::VolumeEffectComponent_c_DisplayClass7_0__Class** type_info = (app::VolumeEffectComponent_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x0476A508));
        inline app::VolumeEffectComponent_c_DisplayClass7_0__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectComponent_c_DisplayClass7_0__Class>(type_info, "AmplifyColor", "VolumeEffectComponent", "<>c__DisplayClass7_0");
        }
        inline app::VolumeEffectComponent_c_DisplayClass7_0* create() {
            return il2cpp::create_object<app::VolumeEffectComponent_c_DisplayClass7_0>(get_class());
        }
    } // namespace VolumeEffectComponent_c_DisplayClass7_0
} // namespace app::classes::types

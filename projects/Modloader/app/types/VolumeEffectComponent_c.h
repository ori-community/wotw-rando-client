#pragma once
#include <Modloader/app/structs/VolumeEffectComponent_c.h>
#include <Modloader/app/structs/VolumeEffectComponent_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectComponent_c {
        inline app::VolumeEffectComponent_c__Class** type_info() {
            static app::VolumeEffectComponent_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolumeEffectComponent_c__Class**)(modloader::win::memory::resolve_rva(0x047832E0));
            }
            return cache;
        }
        inline app::VolumeEffectComponent_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectComponent_c__Class>(type_info(), "AmplifyColor", "VolumeEffectComponent", "<>c");
        }
        inline app::VolumeEffectComponent_c* create() {
            return il2cpp::create_object<app::VolumeEffectComponent_c>(get_class());
        }
    } // namespace VolumeEffectComponent_c
} // namespace app::classes::types

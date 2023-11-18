#pragma once
#include <Modloader/app/structs/VolumeEffectFlags_c.h>
#include <Modloader/app/structs/VolumeEffectFlags_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectFlags_c {
        inline app::VolumeEffectFlags_c__Class** type_info() {
            static app::VolumeEffectFlags_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolumeEffectFlags_c__Class**)(modloader::win::memory::resolve_rva(0x047628D0));
            }
            return cache;
        }
        inline app::VolumeEffectFlags_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectFlags_c__Class>(type_info(), "AmplifyColor", "VolumeEffectFlags", "<>c");
        }
        inline app::VolumeEffectFlags_c* create() {
            return il2cpp::create_object<app::VolumeEffectFlags_c>(get_class());
        }
    } // namespace VolumeEffectFlags_c
} // namespace app::classes::types

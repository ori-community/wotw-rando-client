#pragma once
#include <Modloader/app/structs/VolumeEffectContainer.h>
#include <Modloader/app/structs/VolumeEffectContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectContainer {
        inline app::VolumeEffectContainer__Class** type_info() {
            static app::VolumeEffectContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolumeEffectContainer__Class**)(modloader::win::memory::resolve_rva(0x0473EDD8));
            }
            return cache;
        }
        inline app::VolumeEffectContainer__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectContainer__Class>(type_info(), "AmplifyColor", "VolumeEffectContainer");
        }
        inline app::VolumeEffectContainer* create() {
            return il2cpp::create_object<app::VolumeEffectContainer>(get_class());
        }
    } // namespace VolumeEffectContainer
} // namespace app::classes::types

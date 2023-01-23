#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumeEffectContainer__Class.h>
#include <Modloader/app/structs/VolumeEffectContainer.h>

namespace app::classes::types {
    namespace VolumeEffectContainer {
        inline app::VolumeEffectContainer__Class** type_info = (app::VolumeEffectContainer__Class**)(modloader::win::memory::resolve_rva(0x0473EDD8));
        inline app::VolumeEffectContainer__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectContainer__Class>(type_info, "AmplifyColor", "VolumeEffectContainer");
        }
        inline app::VolumeEffectContainer* create() {
            return il2cpp::create_object<app::VolumeEffectContainer>(get_class());
        }
    } // namespace VolumeEffectContainer
} // namespace app::classes::types

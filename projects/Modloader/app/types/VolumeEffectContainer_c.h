#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEffectContainer_c {
        inline app::VolumeEffectContainer_c__Class** type_info = (app::VolumeEffectContainer_c__Class**)(modloader::win::memory::resolve_rva(0x04757250));
        inline app::VolumeEffectContainer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectContainer_c__Class>(type_info, "AmplifyColor", "VolumeEffectContainer", "<>c");
        }
        inline app::VolumeEffectContainer_c* create() {
            return il2cpp::create_object<app::VolumeEffectContainer_c>(get_class());
        }
    } // namespace VolumeEffectContainer_c
} // namespace app::classes::types

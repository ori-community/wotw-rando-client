#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VolumeEffectFlags_c__Class.h>
#include <Modloader/app/structs/VolumeEffectFlags_c.h>

namespace app::classes::types {
    namespace VolumeEffectFlags_c {
        inline app::VolumeEffectFlags_c__Class** type_info = (app::VolumeEffectFlags_c__Class**)(modloader::win::memory::resolve_rva(0x047628D0));
        inline app::VolumeEffectFlags_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffectFlags_c__Class>(type_info, "AmplifyColor", "VolumeEffectFlags", "<>c");
        }
        inline app::VolumeEffectFlags_c* create() {
            return il2cpp::create_object<app::VolumeEffectFlags_c>(get_class());
        }
    } // namespace VolumeEffectFlags_c
} // namespace app::classes::types

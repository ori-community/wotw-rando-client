#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEffectComponentFlags {
        inline app::VolumeEffectComponentFlags__Class** type_info = (app::VolumeEffectComponentFlags__Class**)(modloader::win::memory::resolve_rva(0x0470BCF0));
        inline app::VolumeEffectComponentFlags__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectComponentFlags__Class>(type_info, "AmplifyColor", "VolumeEffectComponentFlags");
        }
        inline app::VolumeEffectComponentFlags* create() {
            return il2cpp::create_object<app::VolumeEffectComponentFlags>(get_class());
        }
        inline app::VolumeEffectComponentFlags__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffectComponentFlags__Array>(get_class(), size);
        }
        inline app::VolumeEffectComponentFlags__Array* create_array(const std::vector<app::VolumeEffectComponentFlags*>& items) {
            return il2cpp::array_new<app::VolumeEffectComponentFlags__Array>(get_class(), items);
        }
    } // namespace VolumeEffectComponentFlags
} // namespace app::classes::types

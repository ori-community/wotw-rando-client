#pragma once
#include <Modloader/app/structs/VolumeEffectComponentFlags.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags__Array.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectComponentFlags {
        inline app::VolumeEffectComponentFlags__Class** type_info() {
            static app::VolumeEffectComponentFlags__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolumeEffectComponentFlags__Class**)(modloader::win::memory::resolve_rva(0x0470BCF0));
            }
            return cache;
        }
        inline app::VolumeEffectComponentFlags__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectComponentFlags__Class>(type_info(), "AmplifyColor", "VolumeEffectComponentFlags");
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

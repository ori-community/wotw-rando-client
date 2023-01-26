#pragma once
#include <Modloader/app/structs/VolumeEffectFieldFlags.h>
#include <Modloader/app/structs/VolumeEffectFieldFlags__Array.h>
#include <Modloader/app/structs/VolumeEffectFieldFlags__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectFieldFlags {
        inline app::VolumeEffectFieldFlags__Class** type_info() {
            static app::VolumeEffectFieldFlags__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolumeEffectFieldFlags__Class**)(modloader::win::memory::resolve_rva(0x04733C98));
            }
            return cache;
        }
        inline app::VolumeEffectFieldFlags__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectFieldFlags__Class>(type_info(), "AmplifyColor", "VolumeEffectFieldFlags");
        }
        inline app::VolumeEffectFieldFlags* create() {
            return il2cpp::create_object<app::VolumeEffectFieldFlags>(get_class());
        }
        inline app::VolumeEffectFieldFlags__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffectFieldFlags__Array>(get_class(), size);
        }
        inline app::VolumeEffectFieldFlags__Array* create_array(const std::vector<app::VolumeEffectFieldFlags*>& items) {
            return il2cpp::array_new<app::VolumeEffectFieldFlags__Array>(get_class(), items);
        }
    } // namespace VolumeEffectFieldFlags
} // namespace app::classes::types

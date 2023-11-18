#pragma once
#include <Modloader/app/structs/VolumeEffectField.h>
#include <Modloader/app/structs/VolumeEffectField__Array.h>
#include <Modloader/app/structs/VolumeEffectField__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffectField {
        inline app::VolumeEffectField__Class** type_info() {
            static app::VolumeEffectField__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolumeEffectField__Class**)(modloader::win::memory::resolve_rva(0x0472C800));
            }
            return cache;
        }
        inline app::VolumeEffectField__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectField__Class>(type_info(), "AmplifyColor", "VolumeEffectField");
        }
        inline app::VolumeEffectField* create() {
            return il2cpp::create_object<app::VolumeEffectField>(get_class());
        }
        inline app::VolumeEffectField__Array* create_array(int size) {
            return il2cpp::array_new<app::VolumeEffectField__Array>(get_class(), size);
        }
        inline app::VolumeEffectField__Array* create_array(const std::vector<app::VolumeEffectField*>& items) {
            return il2cpp::array_new<app::VolumeEffectField__Array>(get_class(), items);
        }
    } // namespace VolumeEffectField
} // namespace app::classes::types

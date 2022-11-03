#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEffectField__Array {
        namespace {
            inline app::VolumeEffectField__Array__Class* type_info_ref = nullptr;
        }
        inline app::VolumeEffectField__Array__Class** type_info = &type_info_ref;
        inline app::VolumeEffectField__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffectField__Array__Class>(type_info, "AmplifyColor", "VolumeEffectField[]");
        }
        inline app::VolumeEffectField__Array* create() {
            return il2cpp::create_object<app::VolumeEffectField__Array>(get_class());
        }
    } // namespace VolumeEffectField__Array
} // namespace app::classes::types

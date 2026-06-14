#pragma once
#include <Modloader/app/structs/VolumeEffect_c.h>
#include <Modloader/app/structs/VolumeEffect_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffect_c {
        inline app::VolumeEffect_c__Class** type_info() {
            static app::VolumeEffect_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolumeEffect_c__Class**)(modloader::win::memory::resolve_rva(0x04755E28));
            }
            return cache;
        }
        inline app::VolumeEffect_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumeEffect_c__Class>(type_info(), "AmplifyColor", "VolumeEffect", "<>c");
        }
        inline app::VolumeEffect_c* create() {
            return il2cpp::create_object<app::VolumeEffect_c>(get_class());
        }
    } // namespace VolumeEffect_c
} // namespace app::classes::types

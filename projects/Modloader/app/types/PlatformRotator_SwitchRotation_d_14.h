#pragma once
#include <Modloader/app/structs/PlatformRotator_SwitchRotation_d_14.h>
#include <Modloader/app/structs/PlatformRotator_SwitchRotation_d_14__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformRotator_SwitchRotation_d_14 {
        inline app::PlatformRotator_SwitchRotation_d_14__Class** type_info() {
            static app::PlatformRotator_SwitchRotation_d_14__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformRotator_SwitchRotation_d_14__Class**)(modloader::win::memory::resolve_rva(0x04709028));
            }
            return cache;
        }
        inline app::PlatformRotator_SwitchRotation_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformRotator_SwitchRotation_d_14__Class>(type_info(), "RootMotion.Demos", "PlatformRotator", "<SwitchRotation>d__14");
        }
        inline app::PlatformRotator_SwitchRotation_d_14* create() {
            return il2cpp::create_object<app::PlatformRotator_SwitchRotation_d_14>(get_class());
        }
    } // namespace PlatformRotator_SwitchRotation_d_14
} // namespace app::classes::types

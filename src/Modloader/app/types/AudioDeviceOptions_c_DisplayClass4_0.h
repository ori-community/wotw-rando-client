#pragma once
#include <Modloader/app/structs/AudioDeviceOptions_c_DisplayClass4_0.h>
#include <Modloader/app/structs/AudioDeviceOptions_c_DisplayClass4_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioDeviceOptions_c_DisplayClass4_0 {
        inline app::AudioDeviceOptions_c_DisplayClass4_0__Class** type_info() {
            static app::AudioDeviceOptions_c_DisplayClass4_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioDeviceOptions_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04779F10));
            }
            return cache;
        }
        inline app::AudioDeviceOptions_c_DisplayClass4_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AudioDeviceOptions_c_DisplayClass4_0__Class>(type_info(), "", "AudioDeviceOptions", "<>c__DisplayClass4_0");
        }
        inline app::AudioDeviceOptions_c_DisplayClass4_0* create() {
            return il2cpp::create_object<app::AudioDeviceOptions_c_DisplayClass4_0>(get_class());
        }
    } // namespace AudioDeviceOptions_c_DisplayClass4_0
} // namespace app::classes::types

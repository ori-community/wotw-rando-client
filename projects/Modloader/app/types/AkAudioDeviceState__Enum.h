#pragma once
#include <Modloader/app/structs/AkAudioDeviceState__Enum.h>
#include <Modloader/app/structs/AkAudioDeviceState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioDeviceState__Enum {
        inline app::AkAudioDeviceState__Enum__Class** type_info() {
            static app::AkAudioDeviceState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkAudioDeviceState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkAudioDeviceState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkAudioDeviceState__Enum__Class>(type_info(), "", "AkAudioDeviceState");
        }
        inline app::AkAudioDeviceState__Enum* create() {
            return il2cpp::create_object<app::AkAudioDeviceState__Enum>(get_class());
        }
    } // namespace AkAudioDeviceState__Enum
} // namespace app::classes::types

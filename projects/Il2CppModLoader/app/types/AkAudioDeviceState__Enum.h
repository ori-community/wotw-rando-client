#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAudioDeviceState__Enum {
        namespace {
            inline app::AkAudioDeviceState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkAudioDeviceState__Enum__Class** type_info = &type_info_ref;
        inline app::AkAudioDeviceState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkAudioDeviceState__Enum__Class>(type_info, "", "AkAudioDeviceState");
        }
        inline app::AkAudioDeviceState__Enum* create() {
            return il2cpp::create_object<app::AkAudioDeviceState__Enum>(get_class());
        }
    } // namespace AkAudioDeviceState__Enum
} // namespace app::classes::types

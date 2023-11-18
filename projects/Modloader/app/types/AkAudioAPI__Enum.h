#pragma once
#include <Modloader/app/structs/AkAudioAPI__Enum.h>
#include <Modloader/app/structs/AkAudioAPI__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioAPI__Enum {
        inline app::AkAudioAPI__Enum__Class** type_info() {
            static app::AkAudioAPI__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkAudioAPI__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C1A8));
            }
            return cache;
        }
        inline app::AkAudioAPI__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkAudioAPI__Enum__Class>(type_info(), "", "AkAudioAPI");
        }
        inline app::AkAudioAPI__Enum* create() {
            return il2cpp::create_object<app::AkAudioAPI__Enum>(get_class());
        }
    } // namespace AkAudioAPI__Enum
} // namespace app::classes::types

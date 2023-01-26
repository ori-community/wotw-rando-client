#pragma once
#include <Modloader/app/structs/AkAudioFormat.h>
#include <Modloader/app/structs/AkAudioFormat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioFormat {
        inline app::AkAudioFormat__Class** type_info() {
            static app::AkAudioFormat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkAudioFormat__Class**)(modloader::win::memory::resolve_rva(0x04768700));
            }
            return cache;
        }
        inline app::AkAudioFormat__Class* get_class() {
            return il2cpp::get_class<app::AkAudioFormat__Class>(type_info(), "", "AkAudioFormat");
        }
        inline app::AkAudioFormat* create() {
            return il2cpp::create_object<app::AkAudioFormat>(get_class());
        }
    } // namespace AkAudioFormat
} // namespace app::classes::types

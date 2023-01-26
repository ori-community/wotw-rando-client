#pragma once
#include <Modloader/app/structs/SoundLog.h>
#include <Modloader/app/structs/SoundLog__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundLog {
        inline app::SoundLog__Class** type_info() {
            static app::SoundLog__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundLog__Class**)(modloader::win::memory::resolve_rva(0x0474F658));
            }
            return cache;
        }
        inline app::SoundLog__Class* get_class() {
            return il2cpp::get_class<app::SoundLog__Class>(type_info(), "", "SoundLog");
        }
        inline app::SoundLog* create() {
            return il2cpp::create_object<app::SoundLog>(get_class());
        }
    } // namespace SoundLog
} // namespace app::classes::types

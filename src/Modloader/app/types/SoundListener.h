#pragma once
#include <Modloader/app/structs/SoundListener.h>
#include <Modloader/app/structs/SoundListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundListener {
        inline app::SoundListener__Class** type_info() {
            static app::SoundListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundListener__Class**)(modloader::win::memory::resolve_rva(0x0476BFC8));
            }
            return cache;
        }
        inline app::SoundListener__Class* get_class() {
            return il2cpp::get_class<app::SoundListener__Class>(type_info(), "Moon.Wwise", "SoundListener");
        }
        inline app::SoundListener* create() {
            return il2cpp::create_object<app::SoundListener>(get_class());
        }
    } // namespace SoundListener
} // namespace app::classes::types

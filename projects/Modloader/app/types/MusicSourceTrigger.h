#pragma once
#include <Modloader/app/structs/MusicSourceTrigger.h>
#include <Modloader/app/structs/MusicSourceTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicSourceTrigger {
        inline app::MusicSourceTrigger__Class** type_info() {
            static app::MusicSourceTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicSourceTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicSourceTrigger__Class* get_class() {
            return il2cpp::get_class<app::MusicSourceTrigger__Class>(type_info(), "", "MusicSourceTrigger");
        }
        inline app::MusicSourceTrigger* create() {
            return il2cpp::create_object<app::MusicSourceTrigger>(get_class());
        }
    } // namespace MusicSourceTrigger
} // namespace app::classes::types

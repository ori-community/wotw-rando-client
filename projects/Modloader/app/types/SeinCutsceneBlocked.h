#pragma once
#include <Modloader/app/structs/SeinCutsceneBlocked.h>
#include <Modloader/app/structs/SeinCutsceneBlocked__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCutsceneBlocked {
        inline app::SeinCutsceneBlocked__Class** type_info() {
            static app::SeinCutsceneBlocked__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinCutsceneBlocked__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinCutsceneBlocked__Class* get_class() {
            return il2cpp::get_class<app::SeinCutsceneBlocked__Class>(type_info(), "", "SeinCutsceneBlocked");
        }
        inline app::SeinCutsceneBlocked* create() {
            return il2cpp::create_object<app::SeinCutsceneBlocked>(get_class());
        }
    } // namespace SeinCutsceneBlocked
} // namespace app::classes::types

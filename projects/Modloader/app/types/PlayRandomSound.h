#pragma once
#include <Modloader/app/structs/PlayRandomSound.h>
#include <Modloader/app/structs/PlayRandomSound__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayRandomSound {
        inline app::PlayRandomSound__Class** type_info() {
            static app::PlayRandomSound__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayRandomSound__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayRandomSound__Class* get_class() {
            return il2cpp::get_class<app::PlayRandomSound__Class>(type_info(), "", "PlayRandomSound");
        }
        inline app::PlayRandomSound* create() {
            return il2cpp::create_object<app::PlayRandomSound>(get_class());
        }
    } // namespace PlayRandomSound
} // namespace app::classes::types

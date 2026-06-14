#pragma once
#include <Modloader/app/structs/SoundController2D.h>
#include <Modloader/app/structs/SoundController2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundController2D {
        inline app::SoundController2D__Class** type_info() {
            static app::SoundController2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundController2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundController2D__Class* get_class() {
            return il2cpp::get_class<app::SoundController2D__Class>(type_info(), "", "SoundController2D");
        }
        inline app::SoundController2D* create() {
            return il2cpp::create_object<app::SoundController2D>(get_class());
        }
    } // namespace SoundController2D
} // namespace app::classes::types

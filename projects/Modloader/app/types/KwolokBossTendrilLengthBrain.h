#pragma once
#include <Modloader/app/structs/KwolokBossTendrilLengthBrain.h>
#include <Modloader/app/structs/KwolokBossTendrilLengthBrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilLengthBrain {
        inline app::KwolokBossTendrilLengthBrain__Class** type_info() {
            static app::KwolokBossTendrilLengthBrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTendrilLengthBrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTendrilLengthBrain__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendrilLengthBrain__Class>(type_info(), "", "KwolokBossTendrilLengthBrain");
        }
        inline app::KwolokBossTendrilLengthBrain* create() {
            return il2cpp::create_object<app::KwolokBossTendrilLengthBrain>(get_class());
        }
    } // namespace KwolokBossTendrilLengthBrain
} // namespace app::classes::types

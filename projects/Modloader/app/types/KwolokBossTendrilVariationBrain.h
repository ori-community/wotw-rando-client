#pragma once
#include <Modloader/app/structs/KwolokBossTendrilVariationBrain.h>
#include <Modloader/app/structs/KwolokBossTendrilVariationBrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendrilVariationBrain {
        inline app::KwolokBossTendrilVariationBrain__Class** type_info() {
            static app::KwolokBossTendrilVariationBrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossTendrilVariationBrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossTendrilVariationBrain__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendrilVariationBrain__Class>(type_info(), "", "KwolokBossTendrilVariationBrain");
        }
        inline app::KwolokBossTendrilVariationBrain* create() {
            return il2cpp::create_object<app::KwolokBossTendrilVariationBrain>(get_class());
        }
    } // namespace KwolokBossTendrilVariationBrain
} // namespace app::classes::types

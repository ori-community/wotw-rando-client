#pragma once
#include <Modloader/app/structs/Flare.h>
#include <Modloader/app/structs/Flare__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Flare {
        inline app::Flare__Class** type_info() {
            static app::Flare__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Flare__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Flare__Class* get_class() {
            return il2cpp::get_class<app::Flare__Class>(type_info(), "UnityEngine", "Flare");
        }
        inline app::Flare* create() {
            return il2cpp::create_object<app::Flare>(get_class());
        }
    } // namespace Flare
} // namespace app::classes::types

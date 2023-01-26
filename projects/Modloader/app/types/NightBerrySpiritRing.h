#pragma once
#include <Modloader/app/structs/NightBerrySpiritRing.h>
#include <Modloader/app/structs/NightBerrySpiritRing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightBerrySpiritRing {
        inline app::NightBerrySpiritRing__Class** type_info() {
            static app::NightBerrySpiritRing__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightBerrySpiritRing__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightBerrySpiritRing__Class* get_class() {
            return il2cpp::get_class<app::NightBerrySpiritRing__Class>(type_info(), "", "NightBerrySpiritRing");
        }
        inline app::NightBerrySpiritRing* create() {
            return il2cpp::create_object<app::NightBerrySpiritRing>(get_class());
        }
    } // namespace NightBerrySpiritRing
} // namespace app::classes::types

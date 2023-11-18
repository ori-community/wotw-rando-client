#pragma once
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals__Array.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_TextVisuals__Array {
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array__Class** type_info() {
            static app::ShowFixedTimeTextEntity_TextVisuals__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowFixedTimeTextEntity_TextVisuals__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array__Class* get_class() {
            return il2cpp::get_class<app::ShowFixedTimeTextEntity_TextVisuals__Array__Class>(type_info(), "Moon.Timeline", "ShowFixedTimeTextEntity+TextVisuals[]");
        }
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_TextVisuals__Array>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity_TextVisuals__Array
} // namespace app::classes::types

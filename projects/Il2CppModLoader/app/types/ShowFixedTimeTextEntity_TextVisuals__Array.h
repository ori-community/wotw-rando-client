#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_TextVisuals__Array {
        namespace {
            inline app::ShowFixedTimeTextEntity_TextVisuals__Array__Class* type_info_ref = nullptr;
        }
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array__Class** type_info = &type_info_ref;
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array__Class* get_class() {
            return il2cpp::get_class<app::ShowFixedTimeTextEntity_TextVisuals__Array__Class>(type_info, "Moon.Timeline", "ShowFixedTimeTextEntity+TextVisuals[]");
        }
        inline app::ShowFixedTimeTextEntity_TextVisuals__Array* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_TextVisuals__Array>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity_TextVisuals__Array
} // namespace app::classes::types

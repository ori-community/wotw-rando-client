#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonBuilder_Slot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonBuilder_Slot__Class** type_info;
        inline app::JsonBuilder_Slot__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonBuilder_Slot__Class>(type_info, "Moon", "JsonBuilder", "Slot");
        }
        inline app::JsonBuilder_Slot* create() {
            return il2cpp::create_object<app::JsonBuilder_Slot>(get_class());
        }
        inline app::JsonBuilder_Slot__Boxed* box(app::JsonBuilder_Slot value) {
            return il2cpp::box_value<app::JsonBuilder_Slot__Boxed>(get_class(), value);
        }
    } // namespace JsonBuilder_Slot
} // namespace app::classes::types

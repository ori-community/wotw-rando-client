#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonParser_Slot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JsonParser_Slot__Class** type_info;
        inline app::JsonParser_Slot__Class* get_class() {
            return il2cpp::get_nested_class<app::JsonParser_Slot__Class>(type_info, "Moon", "JsonParser", "Slot");
        }
        inline app::JsonParser_Slot* create() {
            return il2cpp::create_object<app::JsonParser_Slot>(get_class());
        }
        inline app::JsonParser_Slot__Boxed* box(app::JsonParser_Slot value) {
            return il2cpp::box_value<app::JsonParser_Slot__Boxed>(get_class(), value);
        }
    } // namespace JsonParser_Slot
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerticalSpacer_Item {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerticalSpacer_Item__Class** type_info;
        inline app::VerticalSpacer_Item__Class* get_class() {
            return il2cpp::get_nested_class<app::VerticalSpacer_Item__Class>(type_info, "", "VerticalSpacer", "Item");
        }
        inline app::VerticalSpacer_Item* create() {
            return il2cpp::create_object<app::VerticalSpacer_Item>(get_class());
        }
        inline app::VerticalSpacer_Item__Boxed* box(app::VerticalSpacer_Item value) {
            return il2cpp::box_value<app::VerticalSpacer_Item__Boxed>(get_class(), value);
        }
        inline app::VerticalSpacer_Item__Array* create_array(int size) {
            return il2cpp::array_new<app::VerticalSpacer_Item__Array>(get_class(), size);
        }
    } // namespace VerticalSpacer_Item
} // namespace app::classes::types

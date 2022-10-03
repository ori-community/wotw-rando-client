#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerticalSpacer_Item__Array {
        namespace {
            app::VerticalSpacer_Item__Array__Class* type_info_ref = nullptr;
        }
        app::VerticalSpacer_Item__Array__Class** type_info = &type_info_ref;
        inline app::VerticalSpacer_Item__Array__Class* get_class() {
            return il2cpp::get_class<app::VerticalSpacer_Item__Array__Class>(type_info, "", "VerticalSpacer+Item[]");
        }
        inline app::VerticalSpacer_Item__Array* create() {
            return il2cpp::create_object<app::VerticalSpacer_Item__Array>(get_class());
        }
    } // namespace VerticalSpacer_Item__Array
} // namespace app::classes::types

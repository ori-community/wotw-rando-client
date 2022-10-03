#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IndexedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IndexedState__Class** type_info;
        inline app::IndexedState__Class* get_class() {
            return il2cpp::get_class<app::IndexedState__Class>(type_info, "", "IndexedState");
        }
        inline app::IndexedState* create() {
            return il2cpp::create_object<app::IndexedState>(get_class());
        }
        inline app::IndexedState__Boxed* box(app::IndexedState value) {
            return il2cpp::box_value<app::IndexedState__Boxed>(get_class(), value);
        }
    } // namespace IndexedState
} // namespace app::classes::types

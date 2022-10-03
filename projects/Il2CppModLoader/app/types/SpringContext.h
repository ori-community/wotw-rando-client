#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpringContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpringContext__Class** type_info;
        inline app::SpringContext__Class* get_class() {
            return il2cpp::get_class<app::SpringContext__Class>(type_info, "", "SpringContext");
        }
        inline app::SpringContext* create() {
            return il2cpp::create_object<app::SpringContext>(get_class());
        }
        inline app::SpringContext__Boxed* box(app::SpringContext value) {
            return il2cpp::box_value<app::SpringContext__Boxed>(get_class(), value);
        }
    } // namespace SpringContext
} // namespace app::classes::types

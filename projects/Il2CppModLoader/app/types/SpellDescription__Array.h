#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellDescription__Array {
        namespace {
            app::SpellDescription__Array__Class* type_info_ref = nullptr;
        }
        app::SpellDescription__Array__Class** type_info = &type_info_ref;
        inline app::SpellDescription__Array__Class* get_class() {
            return il2cpp::get_class<app::SpellDescription__Array__Class>(type_info, "", "SpellDescription[]");
        }
        inline app::SpellDescription__Array* create() {
            return il2cpp::create_object<app::SpellDescription__Array>(get_class());
        }
    } // namespace SpellDescription__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDrivableGroup__Array {
        namespace {
            app::IDrivableGroup__Array__Class* type_info_ref = nullptr;
        }
        app::IDrivableGroup__Array__Class** type_info = &type_info_ref;
        inline app::IDrivableGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::IDrivableGroup__Array__Class>(type_info, "Moon", "IDrivableGroup[]");
        }
        inline app::IDrivableGroup__Array* create() {
            return il2cpp::create_object<app::IDrivableGroup__Array>(get_class());
        }
    } // namespace IDrivableGroup__Array
} // namespace app::classes::types

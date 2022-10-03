#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Mine__Array {
        namespace {
            app::Mine__Array__Class* type_info_ref = nullptr;
        }
        app::Mine__Array__Class** type_info = &type_info_ref;
        inline app::Mine__Array__Class* get_class() {
            return il2cpp::get_class<app::Mine__Array__Class>(type_info, "", "Mine[]");
        }
        inline app::Mine__Array* create() {
            return il2cpp::create_object<app::Mine__Array>(get_class());
        }
    } // namespace Mine__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSwarmer__Array {
        namespace {
            app::UberSwarmer__Array__Class* type_info_ref = nullptr;
        }
        app::UberSwarmer__Array__Class** type_info = &type_info_ref;
        inline app::UberSwarmer__Array__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmer__Array__Class>(type_info, "", "UberSwarmer[]");
        }
        inline app::UberSwarmer__Array* create() {
            return il2cpp::create_object<app::UberSwarmer__Array>(get_class());
        }
    } // namespace UberSwarmer__Array
} // namespace app::classes::types

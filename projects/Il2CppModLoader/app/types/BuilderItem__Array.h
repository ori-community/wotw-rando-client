#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderItem__Array {
        namespace {
            app::BuilderItem__Array__Class* type_info_ref = nullptr;
        }
        app::BuilderItem__Array__Class** type_info = &type_info_ref;
        inline app::BuilderItem__Array__Class* get_class() {
            return il2cpp::get_class<app::BuilderItem__Array__Class>(type_info, "", "BuilderItem[]");
        }
        inline app::BuilderItem__Array* create() {
            return il2cpp::create_object<app::BuilderItem__Array>(get_class());
        }
    } // namespace BuilderItem__Array
} // namespace app::classes::types

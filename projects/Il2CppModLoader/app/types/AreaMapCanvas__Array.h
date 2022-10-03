#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapCanvas__Array {
        namespace {
            app::AreaMapCanvas__Array__Class* type_info_ref = nullptr;
        }
        app::AreaMapCanvas__Array__Class** type_info = &type_info_ref;
        inline app::AreaMapCanvas__Array__Class* get_class() {
            return il2cpp::get_class<app::AreaMapCanvas__Array__Class>(type_info, "", "AreaMapCanvas[]");
        }
        inline app::AreaMapCanvas__Array* create() {
            return il2cpp::create_object<app::AreaMapCanvas__Array>(get_class());
        }
    } // namespace AreaMapCanvas__Array
} // namespace app::classes::types

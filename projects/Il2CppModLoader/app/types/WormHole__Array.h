#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WormHole__Array {
        namespace {
            app::WormHole__Array__Class* type_info_ref = nullptr;
        }
        app::WormHole__Array__Class** type_info = &type_info_ref;
        inline app::WormHole__Array__Class* get_class() {
            return il2cpp::get_class<app::WormHole__Array__Class>(type_info, "", "WormHole[]");
        }
        inline app::WormHole__Array* create() {
            return il2cpp::create_object<app::WormHole__Array>(get_class());
        }
    } // namespace WormHole__Array
} // namespace app::classes::types

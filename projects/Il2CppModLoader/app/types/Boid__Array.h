#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Boid__Array {
        namespace {
            app::Boid__Array__Class* type_info_ref = nullptr;
        }
        app::Boid__Array__Class** type_info = &type_info_ref;
        inline app::Boid__Array__Class* get_class() {
            return il2cpp::get_class<app::Boid__Array__Class>(type_info, "", "Boid[]");
        }
        inline app::Boid__Array* create() {
            return il2cpp::create_object<app::Boid__Array>(get_class());
        }
    } // namespace Boid__Array
} // namespace app::classes::types

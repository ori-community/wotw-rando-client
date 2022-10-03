#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletVertex__Array {
        namespace {
            app::VerletVertex__Array__Class* type_info_ref = nullptr;
        }
        app::VerletVertex__Array__Class** type_info = &type_info_ref;
        inline app::VerletVertex__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletVertex__Array__Class>(type_info, "", "VerletVertex[]");
        }
        inline app::VerletVertex__Array* create() {
            return il2cpp::create_object<app::VerletVertex__Array>(get_class());
        }
    } // namespace VerletVertex__Array
} // namespace app::classes::types

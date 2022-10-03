#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabEntity__Array {
        namespace {
            app::CrabEntity__Array__Class* type_info_ref = nullptr;
        }
        app::CrabEntity__Array__Class** type_info = &type_info_ref;
        inline app::CrabEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::CrabEntity__Array__Class>(type_info, "", "CrabEntity[]");
        }
        inline app::CrabEntity__Array* create() {
            return il2cpp::create_object<app::CrabEntity__Array>(get_class());
        }
    } // namespace CrabEntity__Array
} // namespace app::classes::types

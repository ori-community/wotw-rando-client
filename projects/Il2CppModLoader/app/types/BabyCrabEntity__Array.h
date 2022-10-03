#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyCrabEntity__Array {
        namespace {
            app::BabyCrabEntity__Array__Class* type_info_ref = nullptr;
        }
        app::BabyCrabEntity__Array__Class** type_info = &type_info_ref;
        inline app::BabyCrabEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::BabyCrabEntity__Array__Class>(type_info, "", "BabyCrabEntity[]");
        }
        inline app::BabyCrabEntity__Array* create() {
            return il2cpp::create_object<app::BabyCrabEntity__Array>(get_class());
        }
    } // namespace BabyCrabEntity__Array
} // namespace app::classes::types

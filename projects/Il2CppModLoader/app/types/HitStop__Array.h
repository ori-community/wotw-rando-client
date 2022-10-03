#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitStop__Array {
        namespace {
            app::HitStop__Array__Class* type_info_ref = nullptr;
        }
        app::HitStop__Array__Class** type_info = &type_info_ref;
        inline app::HitStop__Array__Class* get_class() {
            return il2cpp::get_class<app::HitStop__Array__Class>(type_info, "Moon", "HitStop[]");
        }
        inline app::HitStop__Array* create() {
            return il2cpp::create_object<app::HitStop__Array>(get_class());
        }
    } // namespace HitStop__Array
} // namespace app::classes::types

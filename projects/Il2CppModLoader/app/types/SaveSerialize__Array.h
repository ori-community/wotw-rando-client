#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSerialize__Array {
        namespace {
            app::SaveSerialize__Array__Class* type_info_ref = nullptr;
        }
        app::SaveSerialize__Array__Class** type_info = &type_info_ref;
        inline app::SaveSerialize__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSerialize__Array__Class>(type_info, "", "SaveSerialize[]");
        }
        inline app::SaveSerialize__Array* create() {
            return il2cpp::create_object<app::SaveSerialize__Array>(get_class());
        }
    } // namespace SaveSerialize__Array
} // namespace app::classes::types

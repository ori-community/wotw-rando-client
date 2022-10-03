#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICameraTarget__Array {
        namespace {
            app::ICameraTarget__Array__Class* type_info_ref = nullptr;
        }
        app::ICameraTarget__Array__Class** type_info = &type_info_ref;
        inline app::ICameraTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::ICameraTarget__Array__Class>(type_info, "", "ICameraTarget[]");
        }
        inline app::ICameraTarget__Array* create() {
            return il2cpp::create_object<app::ICameraTarget__Array>(get_class());
        }
    } // namespace ICameraTarget__Array
} // namespace app::classes::types

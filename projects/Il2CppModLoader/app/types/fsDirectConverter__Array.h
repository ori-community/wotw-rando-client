#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsDirectConverter__Array {
        namespace {
            app::fsDirectConverter__Array__Class* type_info_ref = nullptr;
        }
        app::fsDirectConverter__Array__Class** type_info = &type_info_ref;
        inline app::fsDirectConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::fsDirectConverter__Array__Class>(type_info, "FullSerializer", "fsDirectConverter[]");
        }
        inline app::fsDirectConverter__Array* create() {
            return il2cpp::create_object<app::fsDirectConverter__Array>(get_class());
        }
    } // namespace fsDirectConverter__Array
} // namespace app::classes::types

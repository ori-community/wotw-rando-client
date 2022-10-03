#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsBaseConverter__Array {
        namespace {
            app::fsBaseConverter__Array__Class* type_info_ref = nullptr;
        }
        app::fsBaseConverter__Array__Class** type_info = &type_info_ref;
        inline app::fsBaseConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::fsBaseConverter__Array__Class>(type_info, "FullSerializer", "fsBaseConverter[]");
        }
        inline app::fsBaseConverter__Array* create() {
            return il2cpp::create_object<app::fsBaseConverter__Array>(get_class());
        }
    } // namespace fsBaseConverter__Array
} // namespace app::classes::types

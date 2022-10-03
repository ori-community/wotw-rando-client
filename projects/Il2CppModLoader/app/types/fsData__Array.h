#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsData__Array {
        namespace {
            app::fsData__Array__Class* type_info_ref = nullptr;
        }
        app::fsData__Array__Class** type_info = &type_info_ref;
        inline app::fsData__Array__Class* get_class() {
            return il2cpp::get_class<app::fsData__Array__Class>(type_info, "FullSerializer", "fsData[]");
        }
        inline app::fsData__Array* create() {
            return il2cpp::create_object<app::fsData__Array>(get_class());
        }
    } // namespace fsData__Array
} // namespace app::classes::types

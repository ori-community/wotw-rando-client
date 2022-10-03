#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsConfig__Array {
        namespace {
            app::fsConfig__Array__Class* type_info_ref = nullptr;
        }
        app::fsConfig__Array__Class** type_info = &type_info_ref;
        inline app::fsConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::fsConfig__Array__Class>(type_info, "FullSerializer", "fsConfig[]");
        }
        inline app::fsConfig__Array* create() {
            return il2cpp::create_object<app::fsConfig__Array>(get_class());
        }
    } // namespace fsConfig__Array
} // namespace app::classes::types

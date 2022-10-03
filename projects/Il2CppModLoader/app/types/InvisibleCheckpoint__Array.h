#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvisibleCheckpoint__Array {
        namespace {
            app::InvisibleCheckpoint__Array__Class* type_info_ref = nullptr;
        }
        app::InvisibleCheckpoint__Array__Class** type_info = &type_info_ref;
        inline app::InvisibleCheckpoint__Array__Class* get_class() {
            return il2cpp::get_class<app::InvisibleCheckpoint__Array__Class>(type_info, "", "InvisibleCheckpoint[]");
        }
        inline app::InvisibleCheckpoint__Array* create() {
            return il2cpp::create_object<app::InvisibleCheckpoint__Array>(get_class());
        }
    } // namespace InvisibleCheckpoint__Array
} // namespace app::classes::types

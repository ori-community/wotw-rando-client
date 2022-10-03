#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Portal_AssistConfig__Array {
        namespace {
            app::Portal_AssistConfig__Array__Class* type_info_ref = nullptr;
        }
        app::Portal_AssistConfig__Array__Class** type_info = &type_info_ref;
        inline app::Portal_AssistConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::Portal_AssistConfig__Array__Class>(type_info, "", "Portal+AssistConfig[]");
        }
        inline app::Portal_AssistConfig__Array* create() {
            return il2cpp::create_object<app::Portal_AssistConfig__Array>(get_class());
        }
    } // namespace Portal_AssistConfig__Array
} // namespace app::classes::types

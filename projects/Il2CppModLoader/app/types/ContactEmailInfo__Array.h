#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactEmailInfo__Array {
        namespace {
            app::ContactEmailInfo__Array__Class* type_info_ref = nullptr;
        }
        app::ContactEmailInfo__Array__Class** type_info = &type_info_ref;
        inline app::ContactEmailInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactEmailInfo__Array__Class>(type_info, "PlayFab.ServerModels", "ContactEmailInfo[]");
        }
        inline app::ContactEmailInfo__Array* create() {
            return il2cpp::create_object<app::ContactEmailInfo__Array>(get_class());
        }
    } // namespace ContactEmailInfo__Array
} // namespace app::classes::types

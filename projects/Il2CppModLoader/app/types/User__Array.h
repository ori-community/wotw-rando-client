#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace User__Array {
        namespace {
            app::User__Array__Class* type_info_ref = nullptr;
        }
        app::User__Array__Class** type_info = &type_info_ref;
        inline app::User__Array__Class* get_class() {
            return il2cpp::get_class<app::User__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "User[]");
        }
        inline app::User__Array* create() {
            return il2cpp::create_object<app::User__Array>(get_class());
        }
    } // namespace User__Array
} // namespace app::classes::types

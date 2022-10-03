#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace User {
        namespace {
            app::User__Class* type_info_ref = nullptr;
        }
        app::User__Class** type_info = &type_info_ref;
        inline app::User__Class* get_class() {
            return il2cpp::get_class<app::User__Class>(type_info, "Microsoft.Applications.Events.DataModels", "User");
        }
        inline app::User* create() {
            return il2cpp::create_object<app::User>(get_class());
        }
        inline app::User__Array* create_array(int size) {
            return il2cpp::array_new<app::User__Array>(get_class(), size);
        }
    } // namespace User
} // namespace app::classes::types

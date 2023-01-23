#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/User__Class.h>
#include <Modloader/app/structs/User.h>
#include <Modloader/app/structs/User__Array.h>

namespace app::classes::types {
    namespace User {
        namespace {
            inline app::User__Class* type_info_ref = nullptr;
        }
        inline app::User__Class** type_info = &type_info_ref;
        inline app::User__Class* get_class() {
            return il2cpp::get_class<app::User__Class>(type_info, "Microsoft.Applications.Events.DataModels", "User");
        }
        inline app::User* create() {
            return il2cpp::create_object<app::User>(get_class());
        }
        inline app::User__Array* create_array(int size) {
            return il2cpp::array_new<app::User__Array>(get_class(), size);
        }
        inline app::User__Array* create_array(const std::vector<app::User*>& items) {
            return il2cpp::array_new<app::User__Array>(get_class(), items);
        }
    } // namespace User
} // namespace app::classes::types

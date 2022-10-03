#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace App__Array {
        namespace {
            app::App__Array__Class* type_info_ref = nullptr;
        }
        app::App__Array__Class** type_info = &type_info_ref;
        inline app::App__Array__Class* get_class() {
            return il2cpp::get_class<app::App__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "App[]");
        }
        inline app::App__Array* create() {
            return il2cpp::create_object<app::App__Array>(get_class());
        }
    } // namespace App__Array
} // namespace app::classes::types

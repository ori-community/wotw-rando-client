#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Net__Array {
        namespace {
            app::Net__Array__Class* type_info_ref = nullptr;
        }
        app::Net__Array__Class** type_info = &type_info_ref;
        inline app::Net__Array__Class* get_class() {
            return il2cpp::get_class<app::Net__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Net[]");
        }
        inline app::Net__Array* create() {
            return il2cpp::create_object<app::Net__Array>(get_class());
        }
    } // namespace Net__Array
} // namespace app::classes::types

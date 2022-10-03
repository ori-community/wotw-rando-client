#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Os__Array {
        namespace {
            app::Os__Array__Class* type_info_ref = nullptr;
        }
        app::Os__Array__Class** type_info = &type_info_ref;
        inline app::Os__Array__Class* get_class() {
            return il2cpp::get_class<app::Os__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Os[]");
        }
        inline app::Os__Array* create() {
            return il2cpp::create_object<app::Os__Array>(get_class());
        }
    } // namespace Os__Array
} // namespace app::classes::types

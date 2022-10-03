#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Device__Array {
        namespace {
            app::Device__Array__Class* type_info_ref = nullptr;
        }
        app::Device__Array__Class** type_info = &type_info_ref;
        inline app::Device__Array__Class* get_class() {
            return il2cpp::get_class<app::Device__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Device[]");
        }
        inline app::Device__Array* create() {
            return il2cpp::create_object<app::Device__Array>(get_class());
        }
    } // namespace Device__Array
} // namespace app::classes::types

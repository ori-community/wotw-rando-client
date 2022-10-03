#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Data__Array {
        namespace {
            app::Data__Array__Class* type_info_ref = nullptr;
        }
        app::Data__Array__Class** type_info = &type_info_ref;
        inline app::Data__Array__Class* get_class() {
            return il2cpp::get_class<app::Data__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Data[]");
        }
        inline app::Data__Array* create() {
            return il2cpp::create_object<app::Data__Array>(get_class());
        }
    } // namespace Data__Array
} // namespace app::classes::types

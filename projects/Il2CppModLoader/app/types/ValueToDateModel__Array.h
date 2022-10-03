#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueToDateModel__Array {
        namespace {
            app::ValueToDateModel__Array__Class* type_info_ref = nullptr;
        }
        app::ValueToDateModel__Array__Class** type_info = &type_info_ref;
        inline app::ValueToDateModel__Array__Class* get_class() {
            return il2cpp::get_class<app::ValueToDateModel__Array__Class>(type_info, "PlayFab.ClientModels", "ValueToDateModel[]");
        }
        inline app::ValueToDateModel__Array* create() {
            return il2cpp::create_object<app::ValueToDateModel__Array>(get_class());
        }
    } // namespace ValueToDateModel__Array
} // namespace app::classes::types

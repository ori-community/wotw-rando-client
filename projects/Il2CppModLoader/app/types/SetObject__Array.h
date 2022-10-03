#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetObject__Array {
        namespace {
            app::SetObject__Array__Class* type_info_ref = nullptr;
        }
        app::SetObject__Array__Class** type_info = &type_info_ref;
        inline app::SetObject__Array__Class* get_class() {
            return il2cpp::get_class<app::SetObject__Array__Class>(type_info, "PlayFab.DataModels", "SetObject[]");
        }
        inline app::SetObject__Array* create() {
            return il2cpp::create_object<app::SetObject__Array>(get_class());
        }
    } // namespace SetObject__Array
} // namespace app::classes::types

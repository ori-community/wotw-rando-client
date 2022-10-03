#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogStatement__Array {
        namespace {
            app::LogStatement__Array__Class* type_info_ref = nullptr;
        }
        app::LogStatement__Array__Class** type_info = &type_info_ref;
        inline app::LogStatement__Array__Class* get_class() {
            return il2cpp::get_class<app::LogStatement__Array__Class>(type_info, "PlayFab.ClientModels", "LogStatement[]");
        }
        inline app::LogStatement__Array* create() {
            return il2cpp::create_object<app::LogStatement__Array>(get_class());
        }
    } // namespace LogStatement__Array
} // namespace app::classes::types

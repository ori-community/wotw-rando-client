#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogStatement_1 {
        namespace {
            inline app::LogStatement_1__Class* type_info_ref = nullptr;
        }
        inline app::LogStatement_1__Class** type_info = &type_info_ref;
        inline app::LogStatement_1__Class* get_class() {
            return il2cpp::get_class<app::LogStatement_1__Class>(type_info, "PlayFab.CloudScriptModels", "LogStatement");
        }
        inline app::LogStatement_1* create() {
            return il2cpp::create_object<app::LogStatement_1>(get_class());
        }
        inline app::LogStatement_1__Array* create_array(int size) {
            return il2cpp::array_new<app::LogStatement_1__Array>(get_class(), size);
        }
        inline app::LogStatement_1__Array* create_array(const std::vector<app::LogStatement_1*>& items) {
            return il2cpp::array_new<app::LogStatement_1__Array>(get_class(), items);
        }
    } // namespace LogStatement_1
} // namespace app::classes::types

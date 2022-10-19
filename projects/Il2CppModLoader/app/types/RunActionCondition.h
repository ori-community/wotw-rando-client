#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RunActionCondition {
        namespace {
            inline app::RunActionCondition__Class* type_info_ref = nullptr;
        }
        inline app::RunActionCondition__Class** type_info = &type_info_ref;
        inline app::RunActionCondition__Class* get_class() {
            return il2cpp::get_class<app::RunActionCondition__Class>(type_info, "", "RunActionCondition");
        }
        inline app::RunActionCondition* create() {
            return il2cpp::create_object<app::RunActionCondition>(get_class());
        }
        inline app::RunActionCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::RunActionCondition__Array>(get_class(), size);
        }
        inline app::RunActionCondition__Array* create_array(const std::vector<app::RunActionCondition*>& items) {
            return il2cpp::array_new<app::RunActionCondition__Array>(get_class(), items);
        }
    } // namespace RunActionCondition
} // namespace app::classes::types

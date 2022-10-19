#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Portal_AssistConfig {
        namespace {
            inline app::Portal_AssistConfig__Class* type_info_ref = nullptr;
        }
        inline app::Portal_AssistConfig__Class** type_info = &type_info_ref;
        inline app::Portal_AssistConfig__Class* get_class() {
            return il2cpp::get_nested_class<app::Portal_AssistConfig__Class>(type_info, "", "Portal", "AssistConfig");
        }
        inline app::Portal_AssistConfig* create() {
            return il2cpp::create_object<app::Portal_AssistConfig>(get_class());
        }
        inline app::Portal_AssistConfig__Array* create_array(int size) {
            return il2cpp::array_new<app::Portal_AssistConfig__Array>(get_class(), size);
        }
        inline app::Portal_AssistConfig__Array* create_array(const std::vector<app::Portal_AssistConfig*>& items) {
            return il2cpp::array_new<app::Portal_AssistConfig__Array>(get_class(), items);
        }
    } // namespace Portal_AssistConfig
} // namespace app::classes::types

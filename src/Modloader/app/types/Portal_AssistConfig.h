#pragma once
#include <Modloader/app/structs/Portal_AssistConfig.h>
#include <Modloader/app/structs/Portal_AssistConfig__Array.h>
#include <Modloader/app/structs/Portal_AssistConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Portal_AssistConfig {
        inline app::Portal_AssistConfig__Class** type_info() {
            static app::Portal_AssistConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Portal_AssistConfig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Portal_AssistConfig__Class* get_class() {
            return il2cpp::get_nested_class<app::Portal_AssistConfig__Class>(type_info(), "", "Portal", "AssistConfig");
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

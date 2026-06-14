#pragma once
#include <Modloader/app/structs/RunActionCondition.h>
#include <Modloader/app/structs/RunActionCondition__Array.h>
#include <Modloader/app/structs/RunActionCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunActionCondition {
        inline app::RunActionCondition__Class** type_info() {
            static app::RunActionCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RunActionCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RunActionCondition__Class* get_class() {
            return il2cpp::get_class<app::RunActionCondition__Class>(type_info(), "", "RunActionCondition");
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

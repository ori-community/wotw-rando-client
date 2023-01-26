#pragma once
#include <Modloader/app/structs/ValueToDateModel__Array.h>
#include <Modloader/app/structs/ValueToDateModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueToDateModel__Array {
        inline app::ValueToDateModel__Array__Class** type_info() {
            static app::ValueToDateModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueToDateModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueToDateModel__Array__Class* get_class() {
            return il2cpp::get_class<app::ValueToDateModel__Array__Class>(type_info(), "PlayFab.ClientModels", "ValueToDateModel[]");
        }
        inline app::ValueToDateModel__Array* create() {
            return il2cpp::create_object<app::ValueToDateModel__Array>(get_class());
        }
    } // namespace ValueToDateModel__Array
} // namespace app::classes::types

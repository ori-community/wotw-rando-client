#pragma once
#include <Modloader/app/structs/ValueToDateModel_1__Array.h>
#include <Modloader/app/structs/ValueToDateModel_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueToDateModel_1__Array {
        inline app::ValueToDateModel_1__Array__Class** type_info() {
            static app::ValueToDateModel_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueToDateModel_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueToDateModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ValueToDateModel_1__Array__Class>(type_info(), "PlayFab.ServerModels", "ValueToDateModel[]");
        }
        inline app::ValueToDateModel_1__Array* create() {
            return il2cpp::create_object<app::ValueToDateModel_1__Array>(get_class());
        }
    } // namespace ValueToDateModel_1__Array
} // namespace app::classes::types

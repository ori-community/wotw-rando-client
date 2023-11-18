#pragma once
#include <Modloader/app/structs/ServerAnimatorHelper_BaseAnimatorData.h>
#include <Modloader/app/structs/ServerAnimatorHelper_BaseAnimatorData__Boxed.h>
#include <Modloader/app/structs/ServerAnimatorHelper_BaseAnimatorData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_BaseAnimatorData {
        inline app::ServerAnimatorHelper_BaseAnimatorData__Class** type_info() {
            static app::ServerAnimatorHelper_BaseAnimatorData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerAnimatorHelper_BaseAnimatorData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerAnimatorHelper_BaseAnimatorData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerAnimatorHelper_BaseAnimatorData__Class>(type_info(), "", "ServerAnimatorHelper", "BaseAnimatorData");
        }
        inline app::ServerAnimatorHelper_BaseAnimatorData* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper_BaseAnimatorData>(get_class());
        }
        inline app::ServerAnimatorHelper_BaseAnimatorData__Boxed* box(app::ServerAnimatorHelper_BaseAnimatorData value) {
            return il2cpp::box_value<app::ServerAnimatorHelper_BaseAnimatorData__Boxed>(get_class(), value);
        }
    } // namespace ServerAnimatorHelper_BaseAnimatorData
} // namespace app::classes::types

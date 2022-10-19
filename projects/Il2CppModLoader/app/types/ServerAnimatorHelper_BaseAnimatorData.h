#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper_BaseAnimatorData {
        namespace {
            inline app::ServerAnimatorHelper_BaseAnimatorData__Class* type_info_ref = nullptr;
        }
        inline app::ServerAnimatorHelper_BaseAnimatorData__Class** type_info = &type_info_ref;
        inline app::ServerAnimatorHelper_BaseAnimatorData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerAnimatorHelper_BaseAnimatorData__Class>(type_info, "", "ServerAnimatorHelper", "BaseAnimatorData");
        }
        inline app::ServerAnimatorHelper_BaseAnimatorData* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper_BaseAnimatorData>(get_class());
        }
        inline app::ServerAnimatorHelper_BaseAnimatorData__Boxed* box(app::ServerAnimatorHelper_BaseAnimatorData value) {
            return il2cpp::box_value<app::ServerAnimatorHelper_BaseAnimatorData__Boxed>(get_class(), value);
        }
    } // namespace ServerAnimatorHelper_BaseAnimatorData
} // namespace app::classes::types

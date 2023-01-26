#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array {
        inline app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array__Class** type_info() {
            static app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyStandard+Request`1[System.Object][]");
        }
        inline app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyStandard_Request_1_System_Object___Array
} // namespace app::classes::types

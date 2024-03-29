#pragma once
#include <Modloader/app/structs/UberWaterReflectionGroup.h>
#include <Modloader/app/structs/UberWaterReflectionGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionGroup {
        inline app::UberWaterReflectionGroup__Class** type_info() {
            static app::UberWaterReflectionGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterReflectionGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterReflectionGroup__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionGroup__Class>(type_info(), "", "UberWaterReflectionGroup");
        }
        inline app::UberWaterReflectionGroup* create() {
            return il2cpp::create_object<app::UberWaterReflectionGroup>(get_class());
        }
    } // namespace UberWaterReflectionGroup
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Array.h>
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetModifier_OffsetLimits__Array {
        inline app::OffsetModifier_OffsetLimits__Array__Class** type_info() {
            static app::OffsetModifier_OffsetLimits__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetModifier_OffsetLimits__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetModifier_OffsetLimits__Array__Class* get_class() {
            return il2cpp::get_class<app::OffsetModifier_OffsetLimits__Array__Class>(type_info(), "RootMotion.FinalIK", "OffsetModifier+OffsetLimits[]");
        }
        inline app::OffsetModifier_OffsetLimits__Array* create() {
            return il2cpp::create_object<app::OffsetModifier_OffsetLimits__Array>(get_class());
        }
    } // namespace OffsetModifier_OffsetLimits__Array
} // namespace app::classes::types

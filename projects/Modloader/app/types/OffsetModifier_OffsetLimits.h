#pragma once
#include <Modloader/app/structs/OffsetModifier_OffsetLimits.h>
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Array.h>
#include <Modloader/app/structs/OffsetModifier_OffsetLimits__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetModifier_OffsetLimits {
        inline app::OffsetModifier_OffsetLimits__Class** type_info() {
            static app::OffsetModifier_OffsetLimits__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetModifier_OffsetLimits__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetModifier_OffsetLimits__Class* get_class() {
            return il2cpp::get_nested_class<app::OffsetModifier_OffsetLimits__Class>(type_info(), "RootMotion.FinalIK", "OffsetModifier", "OffsetLimits");
        }
        inline app::OffsetModifier_OffsetLimits* create() {
            return il2cpp::create_object<app::OffsetModifier_OffsetLimits>(get_class());
        }
        inline app::OffsetModifier_OffsetLimits__Array* create_array(int size) {
            return il2cpp::array_new<app::OffsetModifier_OffsetLimits__Array>(get_class(), size);
        }
        inline app::OffsetModifier_OffsetLimits__Array* create_array(const std::vector<app::OffsetModifier_OffsetLimits*>& items) {
            return il2cpp::array_new<app::OffsetModifier_OffsetLimits__Array>(get_class(), items);
        }
    } // namespace OffsetModifier_OffsetLimits
} // namespace app::classes::types

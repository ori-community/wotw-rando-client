#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OffsetModifier_OffsetLimits {
        namespace {
            inline app::OffsetModifier_OffsetLimits__Class* type_info_ref = nullptr;
        }
        inline app::OffsetModifier_OffsetLimits__Class** type_info = &type_info_ref;
        inline app::OffsetModifier_OffsetLimits__Class* get_class() {
            return il2cpp::get_nested_class<app::OffsetModifier_OffsetLimits__Class>(type_info, "RootMotion.FinalIK", "OffsetModifier", "OffsetLimits");
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

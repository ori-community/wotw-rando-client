#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OffsetModifier_OffsetLimits__Array {
        namespace {
            inline app::OffsetModifier_OffsetLimits__Array__Class* type_info_ref = nullptr;
        }
        inline app::OffsetModifier_OffsetLimits__Array__Class** type_info = &type_info_ref;
        inline app::OffsetModifier_OffsetLimits__Array__Class* get_class() {
            return il2cpp::get_class<app::OffsetModifier_OffsetLimits__Array__Class>(type_info, "RootMotion.FinalIK", "OffsetModifier+OffsetLimits[]");
        }
        inline app::OffsetModifier_OffsetLimits__Array* create() {
            return il2cpp::create_object<app::OffsetModifier_OffsetLimits__Array>(get_class());
        }
    } // namespace OffsetModifier_OffsetLimits__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionTarget_Multiplier__Array {
        namespace {
            inline app::InteractionTarget_Multiplier__Array__Class* type_info_ref = nullptr;
        }
        inline app::InteractionTarget_Multiplier__Array__Class** type_info = &type_info_ref;
        inline app::InteractionTarget_Multiplier__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTarget_Multiplier__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionTarget+Multiplier[]");
        }
        inline app::InteractionTarget_Multiplier__Array* create() {
            return il2cpp::create_object<app::InteractionTarget_Multiplier__Array>(get_class());
        }
    } // namespace InteractionTarget_Multiplier__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InteractionTrigger__Array__Class.h>
#include <Modloader/app/structs/InteractionTrigger__Array.h>

namespace app::classes::types {
    namespace InteractionTrigger__Array {
        namespace {
            inline app::InteractionTrigger__Array__Class* type_info_ref = nullptr;
        }
        inline app::InteractionTrigger__Array__Class** type_info = &type_info_ref;
        inline app::InteractionTrigger__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTrigger__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger[]");
        }
        inline app::InteractionTrigger__Array* create() {
            return il2cpp::create_object<app::InteractionTrigger__Array>(get_class());
        }
    } // namespace InteractionTrigger__Array
} // namespace app::classes::types

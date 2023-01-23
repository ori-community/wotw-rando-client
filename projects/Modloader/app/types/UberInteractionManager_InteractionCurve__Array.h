#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Array__Class.h>
#include <Modloader/app/structs/UberInteractionManager_InteractionCurve__Array.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionCurve__Array {
        namespace {
            inline app::UberInteractionManager_InteractionCurve__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberInteractionManager_InteractionCurve__Array__Class** type_info = &type_info_ref;
        inline app::UberInteractionManager_InteractionCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager_InteractionCurve__Array__Class>(type_info, "", "UberInteractionManager+InteractionCurve[]");
        }
        inline app::UberInteractionManager_InteractionCurve__Array* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionCurve__Array>(get_class());
        }
    } // namespace UberInteractionManager_InteractionCurve__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResetInteractionObject {
        namespace {
            inline app::ResetInteractionObject__Class* type_info_ref = nullptr;
        }
        inline app::ResetInteractionObject__Class** type_info = &type_info_ref;
        inline app::ResetInteractionObject__Class* get_class() {
            return il2cpp::get_class<app::ResetInteractionObject__Class>(type_info, "RootMotion.Demos", "ResetInteractionObject");
        }
        inline app::ResetInteractionObject* create() {
            return il2cpp::create_object<app::ResetInteractionObject>(get_class());
        }
    } // namespace ResetInteractionObject
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResetInteractionObject {
        namespace {
            app::ResetInteractionObject__Class* type_info_ref = nullptr;
        }
        app::ResetInteractionObject__Class** type_info = &type_info_ref;
        inline app::ResetInteractionObject__Class* get_class() {
            return il2cpp::get_class<app::ResetInteractionObject__Class>(type_info, "RootMotion.Demos", "ResetInteractionObject");
        }
        inline app::ResetInteractionObject* create() {
            return il2cpp::create_object<app::ResetInteractionObject>(get_class());
        }
    } // namespace ResetInteractionObject
} // namespace app::classes::types

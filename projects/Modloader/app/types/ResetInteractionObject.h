#pragma once
#include <Modloader/app/structs/ResetInteractionObject.h>
#include <Modloader/app/structs/ResetInteractionObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResetInteractionObject {
        inline app::ResetInteractionObject__Class** type_info() {
            static app::ResetInteractionObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResetInteractionObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResetInteractionObject__Class* get_class() {
            return il2cpp::get_class<app::ResetInteractionObject__Class>(type_info(), "RootMotion.Demos", "ResetInteractionObject");
        }
        inline app::ResetInteractionObject* create() {
            return il2cpp::create_object<app::ResetInteractionObject>(get_class());
        }
    } // namespace ResetInteractionObject
} // namespace app::classes::types

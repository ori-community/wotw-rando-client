#pragma once
#include <Modloader/app/structs/FBIKHandsOnProp.h>
#include <Modloader/app/structs/FBIKHandsOnProp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKHandsOnProp {
        inline app::FBIKHandsOnProp__Class** type_info() {
            static app::FBIKHandsOnProp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBIKHandsOnProp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBIKHandsOnProp__Class* get_class() {
            return il2cpp::get_class<app::FBIKHandsOnProp__Class>(type_info(), "RootMotion.Demos", "FBIKHandsOnProp");
        }
        inline app::FBIKHandsOnProp* create() {
            return il2cpp::create_object<app::FBIKHandsOnProp>(get_class());
        }
    } // namespace FBIKHandsOnProp
} // namespace app::classes::types

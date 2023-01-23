#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FBIKHandsOnProp__Class.h>
#include <Modloader/app/structs/FBIKHandsOnProp.h>

namespace app::classes::types {
    namespace FBIKHandsOnProp {
        namespace {
            inline app::FBIKHandsOnProp__Class* type_info_ref = nullptr;
        }
        inline app::FBIKHandsOnProp__Class** type_info = &type_info_ref;
        inline app::FBIKHandsOnProp__Class* get_class() {
            return il2cpp::get_class<app::FBIKHandsOnProp__Class>(type_info, "RootMotion.Demos", "FBIKHandsOnProp");
        }
        inline app::FBIKHandsOnProp* create() {
            return il2cpp::create_object<app::FBIKHandsOnProp>(get_class());
        }
    } // namespace FBIKHandsOnProp
} // namespace app::classes::types

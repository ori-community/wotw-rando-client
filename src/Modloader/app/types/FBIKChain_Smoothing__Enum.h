#pragma once
#include <Modloader/app/structs/FBIKChain_Smoothing__Enum.h>
#include <Modloader/app/structs/FBIKChain_Smoothing__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKChain_Smoothing__Enum {
        inline app::FBIKChain_Smoothing__Enum__Class** type_info() {
            static app::FBIKChain_Smoothing__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBIKChain_Smoothing__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBIKChain_Smoothing__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FBIKChain_Smoothing__Enum__Class>(type_info(), "RootMotion.FinalIK", "FBIKChain", "Smoothing");
        }
        inline app::FBIKChain_Smoothing__Enum* create() {
            return il2cpp::create_object<app::FBIKChain_Smoothing__Enum>(get_class());
        }
    } // namespace FBIKChain_Smoothing__Enum
} // namespace app::classes::types

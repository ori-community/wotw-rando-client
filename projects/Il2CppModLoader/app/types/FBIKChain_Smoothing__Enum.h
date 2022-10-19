#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBIKChain_Smoothing__Enum {
        namespace {
            inline app::FBIKChain_Smoothing__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FBIKChain_Smoothing__Enum__Class** type_info = &type_info_ref;
        inline app::FBIKChain_Smoothing__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FBIKChain_Smoothing__Enum__Class>(type_info, "RootMotion.FinalIK", "FBIKChain", "Smoothing");
        }
        inline app::FBIKChain_Smoothing__Enum* create() {
            return il2cpp::create_object<app::FBIKChain_Smoothing__Enum>(get_class());
        }
    } // namespace FBIKChain_Smoothing__Enum
} // namespace app::classes::types

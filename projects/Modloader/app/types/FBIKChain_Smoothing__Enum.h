#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FBIKChain_Smoothing__Enum__Class.h>
#include <Modloader/app/structs/FBIKChain_Smoothing__Enum.h>

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

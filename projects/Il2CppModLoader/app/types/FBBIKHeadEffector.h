#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBBIKHeadEffector {
        namespace {
            inline app::FBBIKHeadEffector__Class* type_info_ref = nullptr;
        }
        inline app::FBBIKHeadEffector__Class** type_info = &type_info_ref;
        inline app::FBBIKHeadEffector__Class* get_class() {
            return il2cpp::get_class<app::FBBIKHeadEffector__Class>(type_info, "RootMotion.FinalIK", "FBBIKHeadEffector");
        }
        inline app::FBBIKHeadEffector* create() {
            return il2cpp::create_object<app::FBBIKHeadEffector>(get_class());
        }
    } // namespace FBBIKHeadEffector
} // namespace app::classes::types

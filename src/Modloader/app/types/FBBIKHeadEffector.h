#pragma once
#include <Modloader/app/structs/FBBIKHeadEffector.h>
#include <Modloader/app/structs/FBBIKHeadEffector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBBIKHeadEffector {
        inline app::FBBIKHeadEffector__Class** type_info() {
            static app::FBBIKHeadEffector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBBIKHeadEffector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBBIKHeadEffector__Class* get_class() {
            return il2cpp::get_class<app::FBBIKHeadEffector__Class>(type_info(), "RootMotion.FinalIK", "FBBIKHeadEffector");
        }
        inline app::FBBIKHeadEffector* create() {
            return il2cpp::create_object<app::FBBIKHeadEffector>(get_class());
        }
    } // namespace FBBIKHeadEffector
} // namespace app::classes::types

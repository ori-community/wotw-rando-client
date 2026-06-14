#pragma once
#include <Modloader/app/structs/FBBIKHeadEffector_BendBone__Array.h>
#include <Modloader/app/structs/FBBIKHeadEffector_BendBone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBBIKHeadEffector_BendBone__Array {
        inline app::FBBIKHeadEffector_BendBone__Array__Class** type_info() {
            static app::FBBIKHeadEffector_BendBone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FBBIKHeadEffector_BendBone__Array__Class**)(modloader::win::memory::resolve_rva(0x04796FC0));
            }
            return cache;
        }
        inline app::FBBIKHeadEffector_BendBone__Array__Class* get_class() {
            return il2cpp::get_class<app::FBBIKHeadEffector_BendBone__Array__Class>(type_info(), "RootMotion.FinalIK", "FBBIKHeadEffector+BendBone[]");
        }
        inline app::FBBIKHeadEffector_BendBone__Array* create() {
            return il2cpp::create_object<app::FBBIKHeadEffector_BendBone__Array>(get_class());
        }
    } // namespace FBBIKHeadEffector_BendBone__Array
} // namespace app::classes::types

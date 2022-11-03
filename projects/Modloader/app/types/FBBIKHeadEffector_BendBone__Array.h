#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBBIKHeadEffector_BendBone__Array {
        inline app::FBBIKHeadEffector_BendBone__Array__Class** type_info = (app::FBBIKHeadEffector_BendBone__Array__Class**)(modloader::win::memory::resolve_rva(0x04796FC0));
        inline app::FBBIKHeadEffector_BendBone__Array__Class* get_class() {
            return il2cpp::get_class<app::FBBIKHeadEffector_BendBone__Array__Class>(type_info, "RootMotion.FinalIK", "FBBIKHeadEffector+BendBone[]");
        }
        inline app::FBBIKHeadEffector_BendBone__Array* create() {
            return il2cpp::create_object<app::FBBIKHeadEffector_BendBone__Array>(get_class());
        }
    } // namespace FBBIKHeadEffector_BendBone__Array
} // namespace app::classes::types

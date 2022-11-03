#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OffsetPose_EffectorLink__Array {
        inline app::OffsetPose_EffectorLink__Array__Class** type_info = (app::OffsetPose_EffectorLink__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A628));
        inline app::OffsetPose_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::OffsetPose_EffectorLink__Array__Class>(type_info, "RootMotion.FinalIK", "OffsetPose+EffectorLink[]");
        }
        inline app::OffsetPose_EffectorLink__Array* create() {
            return il2cpp::create_object<app::OffsetPose_EffectorLink__Array>(get_class());
        }
    } // namespace OffsetPose_EffectorLink__Array
} // namespace app::classes::types

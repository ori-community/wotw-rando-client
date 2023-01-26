#pragma once
#include <Modloader/app/structs/OffsetPose_EffectorLink__Array.h>
#include <Modloader/app/structs/OffsetPose_EffectorLink__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetPose_EffectorLink__Array {
        inline app::OffsetPose_EffectorLink__Array__Class** type_info() {
            static app::OffsetPose_EffectorLink__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OffsetPose_EffectorLink__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A628));
            }
            return cache;
        }
        inline app::OffsetPose_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::OffsetPose_EffectorLink__Array__Class>(type_info(), "RootMotion.FinalIK", "OffsetPose+EffectorLink[]");
        }
        inline app::OffsetPose_EffectorLink__Array* create() {
            return il2cpp::create_object<app::OffsetPose_EffectorLink__Array>(get_class());
        }
    } // namespace OffsetPose_EffectorLink__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OffsetPose_EffectorLink {
        namespace {
            inline app::OffsetPose_EffectorLink__Class* type_info_ref = nullptr;
        }
        inline app::OffsetPose_EffectorLink__Class** type_info = &type_info_ref;
        inline app::OffsetPose_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::OffsetPose_EffectorLink__Class>(type_info, "RootMotion.FinalIK", "OffsetPose", "EffectorLink");
        }
        inline app::OffsetPose_EffectorLink* create() {
            return il2cpp::create_object<app::OffsetPose_EffectorLink>(get_class());
        }
        inline app::OffsetPose_EffectorLink__Array* create_array(int size) {
            return il2cpp::array_new<app::OffsetPose_EffectorLink__Array>(get_class(), size);
        }
        inline app::OffsetPose_EffectorLink__Array* create_array(const std::vector<app::OffsetPose_EffectorLink*>& items) {
            return il2cpp::array_new<app::OffsetPose_EffectorLink__Array>(get_class(), items);
        }
    } // namespace OffsetPose_EffectorLink
} // namespace app::classes::types

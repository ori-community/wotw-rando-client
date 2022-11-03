#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZoneScalingData {
        namespace {
            inline app::ZoneScalingData__Class* type_info_ref = nullptr;
        }
        inline app::ZoneScalingData__Class** type_info = &type_info_ref;
        inline app::ZoneScalingData__Class* get_class() {
            return il2cpp::get_class<app::ZoneScalingData__Class>(type_info, "", "ZoneScalingData");
        }
        inline app::ZoneScalingData* create() {
            return il2cpp::create_object<app::ZoneScalingData>(get_class());
        }
    } // namespace ZoneScalingData
} // namespace app::classes::types

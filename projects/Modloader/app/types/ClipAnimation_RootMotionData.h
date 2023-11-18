#pragma once
#include <Modloader/app/structs/ClipAnimation_RootMotionData.h>
#include <Modloader/app/structs/ClipAnimation_RootMotionData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClipAnimation_RootMotionData {
        inline app::ClipAnimation_RootMotionData__Class** type_info() {
            static app::ClipAnimation_RootMotionData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClipAnimation_RootMotionData__Class**)(modloader::win::memory::resolve_rva(0x047543A0));
            }
            return cache;
        }
        inline app::ClipAnimation_RootMotionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ClipAnimation_RootMotionData__Class>(type_info(), "Moon", "ClipAnimation", "RootMotionData");
        }
        inline app::ClipAnimation_RootMotionData* create() {
            return il2cpp::create_object<app::ClipAnimation_RootMotionData>(get_class());
        }
    } // namespace ClipAnimation_RootMotionData
} // namespace app::classes::types

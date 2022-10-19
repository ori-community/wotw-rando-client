#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameData {
        namespace {
            inline app::FrameData__Class* type_info_ref = nullptr;
        }
        inline app::FrameData__Class** type_info = &type_info_ref;
        inline app::FrameData__Class* get_class() {
            return il2cpp::get_class<app::FrameData__Class>(type_info, "UnityEngine.Playables", "FrameData");
        }
        inline app::FrameData* create() {
            return il2cpp::create_object<app::FrameData>(get_class());
        }
        inline app::FrameData__Boxed* box(app::FrameData value) {
            return il2cpp::box_value<app::FrameData__Boxed>(get_class(), value);
        }
    } // namespace FrameData
} // namespace app::classes::types

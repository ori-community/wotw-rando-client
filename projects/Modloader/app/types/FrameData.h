#pragma once
#include <Modloader/app/structs/FrameData.h>
#include <Modloader/app/structs/FrameData__Boxed.h>
#include <Modloader/app/structs/FrameData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameData {
        inline app::FrameData__Class** type_info() {
            static app::FrameData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameData__Class* get_class() {
            return il2cpp::get_class<app::FrameData__Class>(type_info(), "UnityEngine.Playables", "FrameData");
        }
        inline app::FrameData* create() {
            return il2cpp::create_object<app::FrameData>(get_class());
        }
        inline app::FrameData__Boxed* box(app::FrameData value) {
            return il2cpp::box_value<app::FrameData__Boxed>(get_class(), value);
        }
    } // namespace FrameData
} // namespace app::classes::types

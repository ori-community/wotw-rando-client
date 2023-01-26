#pragma once
#include <Modloader/app/structs/StartTimelineOnAwake.h>
#include <Modloader/app/structs/StartTimelineOnAwake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartTimelineOnAwake {
        inline app::StartTimelineOnAwake__Class** type_info() {
            static app::StartTimelineOnAwake__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StartTimelineOnAwake__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StartTimelineOnAwake__Class* get_class() {
            return il2cpp::get_class<app::StartTimelineOnAwake__Class>(type_info(), "Moon", "StartTimelineOnAwake");
        }
        inline app::StartTimelineOnAwake* create() {
            return il2cpp::create_object<app::StartTimelineOnAwake>(get_class());
        }
    } // namespace StartTimelineOnAwake
} // namespace app::classes::types

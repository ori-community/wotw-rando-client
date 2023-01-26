#pragma once
#include <Modloader/app/structs/GoldenSeinOnTimelineEvent.h>
#include <Modloader/app/structs/GoldenSeinOnTimelineEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoldenSeinOnTimelineEvent {
        inline app::GoldenSeinOnTimelineEvent__Class** type_info() {
            static app::GoldenSeinOnTimelineEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GoldenSeinOnTimelineEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GoldenSeinOnTimelineEvent__Class* get_class() {
            return il2cpp::get_class<app::GoldenSeinOnTimelineEvent__Class>(type_info(), "", "GoldenSeinOnTimelineEvent");
        }
        inline app::GoldenSeinOnTimelineEvent* create() {
            return il2cpp::create_object<app::GoldenSeinOnTimelineEvent>(get_class());
        }
    } // namespace GoldenSeinOnTimelineEvent
} // namespace app::classes::types

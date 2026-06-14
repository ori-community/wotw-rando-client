#pragma once
#include <Modloader/app/structs/LegacyTimelineSequence__Array.h>
#include <Modloader/app/structs/LegacyTimelineSequence__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence__Array {
        inline app::LegacyTimelineSequence__Array__Class** type_info() {
            static app::LegacyTimelineSequence__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTimelineSequence__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTimelineSequence__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineSequence__Array__Class>(type_info(), "", "LegacyTimelineSequence[]");
        }
        inline app::LegacyTimelineSequence__Array* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence__Array>(get_class());
        }
    } // namespace LegacyTimelineSequence__Array
} // namespace app::classes::types

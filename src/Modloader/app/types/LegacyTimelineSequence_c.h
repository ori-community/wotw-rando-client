#pragma once
#include <Modloader/app/structs/LegacyTimelineSequence_c.h>
#include <Modloader/app/structs/LegacyTimelineSequence_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_c {
        inline app::LegacyTimelineSequence_c__Class** type_info() {
            static app::LegacyTimelineSequence_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyTimelineSequence_c__Class**)(modloader::win::memory::resolve_rva(0x04733498));
            }
            return cache;
        }
        inline app::LegacyTimelineSequence_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_c__Class>(type_info(), "", "LegacyTimelineSequence", "<>c");
        }
        inline app::LegacyTimelineSequence_c* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_c>(get_class());
        }
    } // namespace LegacyTimelineSequence_c
} // namespace app::classes::types

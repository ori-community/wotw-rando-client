#pragma once
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SequenceEntry_Constraint {
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint__Class** type_info() {
            static app::LegacyTimelineSequence_SequenceEntry_Constraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyTimelineSequence_SequenceEntry_Constraint__Class**)(modloader::win::memory::resolve_rva(0x04774EC8));
            }
            return cache;
        }
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_SequenceEntry_Constraint__Class>(type_info(), "", "LegacyTimelineSequence+SequenceEntry", "Constraint");
        }
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SequenceEntry_Constraint>(get_class());
        }
    } // namespace LegacyTimelineSequence_SequenceEntry_Constraint
} // namespace app::classes::types

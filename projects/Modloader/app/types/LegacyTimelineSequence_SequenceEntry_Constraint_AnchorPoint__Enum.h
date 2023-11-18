#pragma once
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum {
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class** type_info() {
            static app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class>(type_info(), "", "LegacyTimelineSequence+SequenceEntry+Constraint", "AnchorPoint");
        }
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum>(get_class());
        }
    } // namespace LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum
} // namespace app::classes::types

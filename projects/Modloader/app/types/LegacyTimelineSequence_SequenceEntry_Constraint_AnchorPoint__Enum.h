#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum {
        namespace {
            inline app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class** type_info = &type_info_ref;
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Class>(type_info, "", "LegacyTimelineSequence+SequenceEntry+Constraint", "AnchorPoint");
        }
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum>(get_class());
        }
    } // namespace LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum
} // namespace app::classes::types

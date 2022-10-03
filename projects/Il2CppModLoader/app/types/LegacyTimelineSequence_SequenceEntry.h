#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SequenceEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTimelineSequence_SequenceEntry__Class** type_info;
        inline app::LegacyTimelineSequence_SequenceEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_SequenceEntry__Class>(type_info, "", "LegacyTimelineSequence", "SequenceEntry");
        }
        inline app::LegacyTimelineSequence_SequenceEntry* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SequenceEntry>(get_class());
        }
        inline app::LegacyTimelineSequence_SequenceEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTimelineSequence_SequenceEntry__Array>(get_class(), size);
        }
    } // namespace LegacyTimelineSequence_SequenceEntry
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry__Class.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry.h>
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry__Array.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SequenceEntry {
        inline app::LegacyTimelineSequence_SequenceEntry__Class** type_info = (app::LegacyTimelineSequence_SequenceEntry__Class**)(modloader::win::memory::resolve_rva(0x047997D8));
        inline app::LegacyTimelineSequence_SequenceEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_SequenceEntry__Class>(type_info, "", "LegacyTimelineSequence", "SequenceEntry");
        }
        inline app::LegacyTimelineSequence_SequenceEntry* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SequenceEntry>(get_class());
        }
        inline app::LegacyTimelineSequence_SequenceEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTimelineSequence_SequenceEntry__Array>(get_class(), size);
        }
        inline app::LegacyTimelineSequence_SequenceEntry__Array* create_array(const std::vector<app::LegacyTimelineSequence_SequenceEntry*>& items) {
            return il2cpp::array_new<app::LegacyTimelineSequence_SequenceEntry__Array>(get_class(), items);
        }
    } // namespace LegacyTimelineSequence_SequenceEntry
} // namespace app::classes::types

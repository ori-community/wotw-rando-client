#pragma once
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry__Array.h>
#include <Modloader/app/structs/MasterTimelineSequence_SceneEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineSequence_SceneEntry {
        inline app::MasterTimelineSequence_SceneEntry__Class** type_info() {
            static app::MasterTimelineSequence_SceneEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MasterTimelineSequence_SceneEntry__Class**)(modloader::win::memory::resolve_rva(0x04760068));
            }
            return cache;
        }
        inline app::MasterTimelineSequence_SceneEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::MasterTimelineSequence_SceneEntry__Class>(type_info(), "", "MasterTimelineSequence", "SceneEntry");
        }
        inline app::MasterTimelineSequence_SceneEntry* create() {
            return il2cpp::create_object<app::MasterTimelineSequence_SceneEntry>(get_class());
        }
        inline app::MasterTimelineSequence_SceneEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::MasterTimelineSequence_SceneEntry__Array>(get_class(), size);
        }
        inline app::MasterTimelineSequence_SceneEntry__Array* create_array(const std::vector<app::MasterTimelineSequence_SceneEntry*>& items) {
            return il2cpp::array_new<app::MasterTimelineSequence_SceneEntry__Array>(get_class(), items);
        }
    } // namespace MasterTimelineSequence_SceneEntry
} // namespace app::classes::types

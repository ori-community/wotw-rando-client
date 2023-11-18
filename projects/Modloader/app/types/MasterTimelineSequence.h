#pragma once
#include <Modloader/app/structs/MasterTimelineSequence.h>
#include <Modloader/app/structs/MasterTimelineSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineSequence {
        inline app::MasterTimelineSequence__Class** type_info() {
            static app::MasterTimelineSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MasterTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x04721298));
            }
            return cache;
        }
        inline app::MasterTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineSequence__Class>(type_info(), "", "MasterTimelineSequence");
        }
        inline app::MasterTimelineSequence* create() {
            return il2cpp::create_object<app::MasterTimelineSequence>(get_class());
        }
    } // namespace MasterTimelineSequence
} // namespace app::classes::types

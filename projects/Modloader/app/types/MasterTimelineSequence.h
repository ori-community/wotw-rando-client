#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MasterTimelineSequence {
        inline app::MasterTimelineSequence__Class** type_info = (app::MasterTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x04721298));
        inline app::MasterTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineSequence__Class>(type_info, "", "MasterTimelineSequence");
        }
        inline app::MasterTimelineSequence* create() {
            return il2cpp::create_object<app::MasterTimelineSequence>(get_class());
        }
    } // namespace MasterTimelineSequence
} // namespace app::classes::types

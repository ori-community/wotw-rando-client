#pragma once
#include <Modloader/app/structs/MirroredTimelineSet.h>
#include <Modloader/app/structs/MirroredTimelineSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MirroredTimelineSet {
        inline app::MirroredTimelineSet__Class** type_info() {
            static app::MirroredTimelineSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MirroredTimelineSet__Class**)(modloader::win::memory::resolve_rva(0x04795D48));
            }
            return cache;
        }
        inline app::MirroredTimelineSet__Class* get_class() {
            return il2cpp::get_class<app::MirroredTimelineSet__Class>(type_info(), "", "MirroredTimelineSet");
        }
        inline app::MirroredTimelineSet* create() {
            return il2cpp::create_object<app::MirroredTimelineSet>(get_class());
        }
    } // namespace MirroredTimelineSet
} // namespace app::classes::types

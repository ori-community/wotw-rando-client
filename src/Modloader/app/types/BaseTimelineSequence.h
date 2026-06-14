#pragma once
#include <Modloader/app/structs/BaseTimelineSequence.h>
#include <Modloader/app/structs/BaseTimelineSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseTimelineSequence {
        inline app::BaseTimelineSequence__Class** type_info() {
            static app::BaseTimelineSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseTimelineSequence__Class**)(modloader::win::memory::resolve_rva(0x0473DDD0));
            }
            return cache;
        }
        inline app::BaseTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::BaseTimelineSequence__Class>(type_info(), "", "BaseTimelineSequence");
        }
        inline app::BaseTimelineSequence* create() {
            return il2cpp::create_object<app::BaseTimelineSequence>(get_class());
        }
    } // namespace BaseTimelineSequence
} // namespace app::classes::types

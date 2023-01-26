#pragma once
#include <Modloader/app/structs/ServerTimelineSequence.h>
#include <Modloader/app/structs/ServerTimelineSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerTimelineSequence {
        inline app::ServerTimelineSequence__Class** type_info() {
            static app::ServerTimelineSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerTimelineSequence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::ServerTimelineSequence__Class>(type_info(), "", "ServerTimelineSequence");
        }
        inline app::ServerTimelineSequence* create() {
            return il2cpp::create_object<app::ServerTimelineSequence>(get_class());
        }
    } // namespace ServerTimelineSequence
} // namespace app::classes::types

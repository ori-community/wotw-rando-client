#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerTimelineSequence__Class.h>
#include <Modloader/app/structs/ServerTimelineSequence.h>

namespace app::classes::types {
    namespace ServerTimelineSequence {
        namespace {
            inline app::ServerTimelineSequence__Class* type_info_ref = nullptr;
        }
        inline app::ServerTimelineSequence__Class** type_info = &type_info_ref;
        inline app::ServerTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::ServerTimelineSequence__Class>(type_info, "", "ServerTimelineSequence");
        }
        inline app::ServerTimelineSequence* create() {
            return il2cpp::create_object<app::ServerTimelineSequence>(get_class());
        }
    } // namespace ServerTimelineSequence
} // namespace app::classes::types

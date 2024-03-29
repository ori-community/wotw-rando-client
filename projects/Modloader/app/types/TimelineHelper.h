#pragma once
#include <Modloader/app/structs/TimelineHelper.h>
#include <Modloader/app/structs/TimelineHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineHelper {
        inline app::TimelineHelper__Class** type_info() {
            static app::TimelineHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineHelper__Class**)(modloader::win::memory::resolve_rva(0x0475CE50));
            }
            return cache;
        }
        inline app::TimelineHelper__Class* get_class() {
            return il2cpp::get_class<app::TimelineHelper__Class>(type_info(), "Moon.Timeline", "TimelineHelper");
        }
        inline app::TimelineHelper* create() {
            return il2cpp::create_object<app::TimelineHelper>(get_class());
        }
    } // namespace TimelineHelper
} // namespace app::classes::types

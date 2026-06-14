#pragma once
#include <Modloader/app/structs/TimelineDoubleEndQueue.h>
#include <Modloader/app/structs/TimelineDoubleEndQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineDoubleEndQueue {
        inline app::TimelineDoubleEndQueue__Class** type_info() {
            static app::TimelineDoubleEndQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineDoubleEndQueue__Class**)(modloader::win::memory::resolve_rva(0x047644F0));
            }
            return cache;
        }
        inline app::TimelineDoubleEndQueue__Class* get_class() {
            return il2cpp::get_class<app::TimelineDoubleEndQueue__Class>(type_info(), "Moon.Timeline", "TimelineDoubleEndQueue");
        }
        inline app::TimelineDoubleEndQueue* create() {
            return il2cpp::create_object<app::TimelineDoubleEndQueue>(get_class());
        }
    } // namespace TimelineDoubleEndQueue
} // namespace app::classes::types

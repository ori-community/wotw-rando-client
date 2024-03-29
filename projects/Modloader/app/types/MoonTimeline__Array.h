#pragma once
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/MoonTimeline__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTimeline__Array {
        inline app::MoonTimeline__Array__Class** type_info() {
            static app::MoonTimeline__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTimeline__Array__Class**)(modloader::win::memory::resolve_rva(0x04749778));
            }
            return cache;
        }
        inline app::MoonTimeline__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTimeline__Array__Class>(type_info(), "Moon.Timeline", "MoonTimeline[]");
        }
        inline app::MoonTimeline__Array* create() {
            return il2cpp::create_object<app::MoonTimeline__Array>(get_class());
        }
    } // namespace MoonTimeline__Array
} // namespace app::classes::types

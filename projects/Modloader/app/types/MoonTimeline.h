#pragma once
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/MoonTimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTimeline {
        inline app::MoonTimeline__Class** type_info() {
            static app::MoonTimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTimeline__Class**)(modloader::win::memory::resolve_rva(0x047875E0));
            }
            return cache;
        }
        inline app::MoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::MoonTimeline__Class>(type_info(), "Moon.Timeline", "MoonTimeline");
        }
        inline app::MoonTimeline* create() {
            return il2cpp::create_object<app::MoonTimeline>(get_class());
        }
        inline app::MoonTimeline__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTimeline__Array>(get_class(), size);
        }
        inline app::MoonTimeline__Array* create_array(const std::vector<app::MoonTimeline*>& items) {
            return il2cpp::array_new<app::MoonTimeline__Array>(get_class(), items);
        }
    } // namespace MoonTimeline
} // namespace app::classes::types

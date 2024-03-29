#pragma once
#include <Modloader/app/structs/VirtualMoonTimeline.h>
#include <Modloader/app/structs/VirtualMoonTimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualMoonTimeline {
        inline app::VirtualMoonTimeline__Class** type_info() {
            static app::VirtualMoonTimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VirtualMoonTimeline__Class**)(modloader::win::memory::resolve_rva(0x047947A0));
            }
            return cache;
        }
        inline app::VirtualMoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::VirtualMoonTimeline__Class>(type_info(), "Moon.Timeline", "VirtualMoonTimeline");
        }
        inline app::VirtualMoonTimeline* create() {
            return il2cpp::create_object<app::VirtualMoonTimeline>(get_class());
        }
    } // namespace VirtualMoonTimeline
} // namespace app::classes::types

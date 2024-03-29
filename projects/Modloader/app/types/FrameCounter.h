#pragma once
#include <Modloader/app/structs/FrameCounter.h>
#include <Modloader/app/structs/FrameCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameCounter {
        inline app::FrameCounter__Class** type_info() {
            static app::FrameCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameCounter__Class**)(modloader::win::memory::resolve_rva(0x04785D20));
            }
            return cache;
        }
        inline app::FrameCounter__Class* get_class() {
            return il2cpp::get_class<app::FrameCounter__Class>(type_info(), "", "FrameCounter");
        }
        inline app::FrameCounter* create() {
            return il2cpp::create_object<app::FrameCounter>(get_class());
        }
    } // namespace FrameCounter
} // namespace app::classes::types

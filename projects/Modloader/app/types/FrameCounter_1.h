#pragma once
#include <Modloader/app/structs/FrameCounter_1.h>
#include <Modloader/app/structs/FrameCounter_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameCounter_1 {
        inline app::FrameCounter_1__Class** type_info() {
            static app::FrameCounter_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameCounter_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameCounter_1__Class* get_class() {
            return il2cpp::get_class<app::FrameCounter_1__Class>(type_info(), "Moon", "FrameCounter");
        }
        inline app::FrameCounter_1* create() {
            return il2cpp::create_object<app::FrameCounter_1>(get_class());
        }
    } // namespace FrameCounter_1
} // namespace app::classes::types

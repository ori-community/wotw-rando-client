#pragma once
#include <Modloader/app/structs/FrameTiming.h>
#include <Modloader/app/structs/FrameTiming__Array.h>
#include <Modloader/app/structs/FrameTiming__Boxed.h>
#include <Modloader/app/structs/FrameTiming__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameTiming {
        inline app::FrameTiming__Class** type_info() {
            static app::FrameTiming__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameTiming__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameTiming__Class* get_class() {
            return il2cpp::get_class<app::FrameTiming__Class>(type_info(), "UnityEngine", "FrameTiming");
        }
        inline app::FrameTiming* create() {
            return il2cpp::create_object<app::FrameTiming>(get_class());
        }
        inline app::FrameTiming__Boxed* box(app::FrameTiming value) {
            return il2cpp::box_value<app::FrameTiming__Boxed>(get_class(), value);
        }
        inline app::FrameTiming__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameTiming__Array>(get_class(), size);
        }
        inline app::FrameTiming__Array* create_array(const std::vector<app::FrameTiming>& items) {
            return il2cpp::array_new<app::FrameTiming__Array>(get_class(), items);
        }
    } // namespace FrameTiming
} // namespace app::classes::types

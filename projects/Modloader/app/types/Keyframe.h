#pragma once
#include <Modloader/app/structs/Keyframe.h>
#include <Modloader/app/structs/Keyframe__Array.h>
#include <Modloader/app/structs/Keyframe__Boxed.h>
#include <Modloader/app/structs/Keyframe__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Keyframe {
        inline app::Keyframe__Class** type_info() {
            static app::Keyframe__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Keyframe__Class**)(modloader::win::memory::resolve_rva(0x0477E4B0));
            }
            return cache;
        }
        inline app::Keyframe__Class* get_class() {
            return il2cpp::get_class<app::Keyframe__Class>(type_info(), "UnityEngine", "Keyframe");
        }
        inline app::Keyframe* create() {
            return il2cpp::create_object<app::Keyframe>(get_class());
        }
        inline app::Keyframe__Boxed* box(app::Keyframe value) {
            return il2cpp::box_value<app::Keyframe__Boxed>(get_class(), value);
        }
        inline app::Keyframe__Array* create_array(int size) {
            return il2cpp::array_new<app::Keyframe__Array>(get_class(), size);
        }
        inline app::Keyframe__Array* create_array(const std::vector<app::Keyframe>& items) {
            return il2cpp::array_new<app::Keyframe__Array>(get_class(), items);
        }
    } // namespace Keyframe
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/IVirtualTimelineGameObject__Array.h>
#include <Modloader/app/structs/IVirtualTimelineGameObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVirtualTimelineGameObject__Array {
        inline app::IVirtualTimelineGameObject__Array__Class** type_info() {
            static app::IVirtualTimelineGameObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IVirtualTimelineGameObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IVirtualTimelineGameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::IVirtualTimelineGameObject__Array__Class>(type_info(), "", "IVirtualTimelineGameObject[]");
        }
        inline app::IVirtualTimelineGameObject__Array* create() {
            return il2cpp::create_object<app::IVirtualTimelineGameObject__Array>(get_class());
        }
    } // namespace IVirtualTimelineGameObject__Array
} // namespace app::classes::types

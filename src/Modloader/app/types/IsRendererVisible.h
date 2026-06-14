#pragma once
#include <Modloader/app/structs/IsRendererVisible.h>
#include <Modloader/app/structs/IsRendererVisible__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsRendererVisible {
        inline app::IsRendererVisible__Class** type_info() {
            static app::IsRendererVisible__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsRendererVisible__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsRendererVisible__Class* get_class() {
            return il2cpp::get_class<app::IsRendererVisible__Class>(type_info(), "", "IsRendererVisible");
        }
        inline app::IsRendererVisible* create() {
            return il2cpp::create_object<app::IsRendererVisible>(get_class());
        }
    } // namespace IsRendererVisible
} // namespace app::classes::types

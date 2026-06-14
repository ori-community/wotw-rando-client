#pragma once
#include <Modloader/app/structs/PointerUIBase_PointerState__Array.h>
#include <Modloader/app/structs/PointerUIBase_PointerState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerUIBase_PointerState__Array {
        inline app::PointerUIBase_PointerState__Array__Class** type_info() {
            static app::PointerUIBase_PointerState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointerUIBase_PointerState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointerUIBase_PointerState__Array__Class* get_class() {
            return il2cpp::get_class<app::PointerUIBase_PointerState__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PointerUIBase+PointerState[]");
        }
        inline app::PointerUIBase_PointerState__Array* create() {
            return il2cpp::create_object<app::PointerUIBase_PointerState__Array>(get_class());
        }
    } // namespace PointerUIBase_PointerState__Array
} // namespace app::classes::types

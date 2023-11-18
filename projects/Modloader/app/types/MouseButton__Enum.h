#pragma once
#include <Modloader/app/structs/MouseButton__Enum.h>
#include <Modloader/app/structs/MouseButton__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MouseButton__Enum {
        inline app::MouseButton__Enum__Class** type_info() {
            static app::MouseButton__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MouseButton__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MouseButton__Enum__Class* get_class() {
            return il2cpp::get_class<app::MouseButton__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "MouseButton");
        }
        inline app::MouseButton__Enum* create() {
            return il2cpp::create_object<app::MouseButton__Enum>(get_class());
        }
    } // namespace MouseButton__Enum
} // namespace app::classes::types

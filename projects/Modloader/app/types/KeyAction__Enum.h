#pragma once
#include <Modloader/app/structs/KeyAction__Enum.h>
#include <Modloader/app/structs/KeyAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyAction__Enum {
        inline app::KeyAction__Enum__Class** type_info() {
            static app::KeyAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyAction__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "KeyAction");
        }
        inline app::KeyAction__Enum* create() {
            return il2cpp::create_object<app::KeyAction__Enum>(get_class());
        }
    } // namespace KeyAction__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/MessageEnum__Enum.h>
#include <Modloader/app/structs/MessageEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageEnum__Enum {
        inline app::MessageEnum__Enum__Class** type_info() {
            static app::MessageEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageEnum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::MessageEnum__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "MessageEnum");
        }
        inline app::MessageEnum__Enum* create() {
            return il2cpp::create_object<app::MessageEnum__Enum>(get_class());
        }
    } // namespace MessageEnum__Enum
} // namespace app::classes::types

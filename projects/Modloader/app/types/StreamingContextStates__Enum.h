#pragma once
#include <Modloader/app/structs/StreamingContextStates__Enum.h>
#include <Modloader/app/structs/StreamingContextStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StreamingContextStates__Enum {
        inline app::StreamingContextStates__Enum__Class** type_info() {
            static app::StreamingContextStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StreamingContextStates__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StreamingContextStates__Enum__Class* get_class() {
            return il2cpp::get_class<app::StreamingContextStates__Enum__Class>(type_info(), "System.Runtime.Serialization", "StreamingContextStates");
        }
        inline app::StreamingContextStates__Enum* create() {
            return il2cpp::create_object<app::StreamingContextStates__Enum>(get_class());
        }
    } // namespace StreamingContextStates__Enum
} // namespace app::classes::types

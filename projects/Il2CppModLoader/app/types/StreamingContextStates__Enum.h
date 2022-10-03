#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StreamingContextStates__Enum {
        namespace {
            app::StreamingContextStates__Enum__Class* type_info_ref = nullptr;
        }
        app::StreamingContextStates__Enum__Class** type_info = &type_info_ref;
        inline app::StreamingContextStates__Enum__Class* get_class() {
            return il2cpp::get_class<app::StreamingContextStates__Enum__Class>(type_info, "System.Runtime.Serialization", "StreamingContextStates");
        }
        inline app::StreamingContextStates__Enum* create() {
            return il2cpp::create_object<app::StreamingContextStates__Enum>(get_class());
        }
    } // namespace StreamingContextStates__Enum
} // namespace app::classes::types

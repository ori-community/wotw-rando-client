#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageEnum__Enum {
        namespace {
            app::MessageEnum__Enum__Class* type_info_ref = nullptr;
        }
        app::MessageEnum__Enum__Class** type_info = &type_info_ref;
        inline app::MessageEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::MessageEnum__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "MessageEnum");
        }
        inline app::MessageEnum__Enum* create() {
            return il2cpp::create_object<app::MessageEnum__Enum>(get_class());
        }
    } // namespace MessageEnum__Enum
} // namespace app::classes::types

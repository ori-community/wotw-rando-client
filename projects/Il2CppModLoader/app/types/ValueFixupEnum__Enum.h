#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueFixupEnum__Enum {
        namespace {
            app::ValueFixupEnum__Enum__Class* type_info_ref = nullptr;
        }
        app::ValueFixupEnum__Enum__Class** type_info = &type_info_ref;
        inline app::ValueFixupEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValueFixupEnum__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ValueFixupEnum");
        }
        inline app::ValueFixupEnum__Enum* create() {
            return il2cpp::create_object<app::ValueFixupEnum__Enum>(get_class());
        }
    } // namespace ValueFixupEnum__Enum
} // namespace app::classes::types

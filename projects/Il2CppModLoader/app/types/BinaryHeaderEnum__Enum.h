#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryHeaderEnum__Enum {
        namespace {
            app::BinaryHeaderEnum__Enum__Class* type_info_ref = nullptr;
        }
        app::BinaryHeaderEnum__Enum__Class** type_info = &type_info_ref;
        inline app::BinaryHeaderEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinaryHeaderEnum__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryHeaderEnum");
        }
        inline app::BinaryHeaderEnum__Enum* create() {
            return il2cpp::create_object<app::BinaryHeaderEnum__Enum>(get_class());
        }
    } // namespace BinaryHeaderEnum__Enum
} // namespace app::classes::types

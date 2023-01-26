#pragma once
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#include <Modloader/app/structs/BinaryHeaderEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryHeaderEnum__Enum {
        inline app::BinaryHeaderEnum__Enum__Class** type_info() {
            static app::BinaryHeaderEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BinaryHeaderEnum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BinaryHeaderEnum__Enum__Class* get_class() {
            return il2cpp::get_class<app::BinaryHeaderEnum__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryHeaderEnum");
        }
        inline app::BinaryHeaderEnum__Enum* create() {
            return il2cpp::create_object<app::BinaryHeaderEnum__Enum>(get_class());
        }
    } // namespace BinaryHeaderEnum__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/Endianness__Enum.h>
#include <Modloader/app/structs/Endianness__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Endianness__Enum {
        inline app::Endianness__Enum__Class** type_info() {
            static app::Endianness__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Endianness__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Endianness__Enum__Class* get_class() {
            return il2cpp::get_class<app::Endianness__Enum__Class>(type_info(), "System.Net", "Endianness");
        }
        inline app::Endianness__Enum* create() {
            return il2cpp::create_object<app::Endianness__Enum>(get_class());
        }
    } // namespace Endianness__Enum
} // namespace app::classes::types

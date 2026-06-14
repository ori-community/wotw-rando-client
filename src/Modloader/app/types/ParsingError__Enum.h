#pragma once
#include <Modloader/app/structs/ParsingError__Enum.h>
#include <Modloader/app/structs/ParsingError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParsingError__Enum {
        inline app::ParsingError__Enum__Class** type_info() {
            static app::ParsingError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParsingError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParsingError__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParsingError__Enum__Class>(type_info(), "System", "ParsingError");
        }
        inline app::ParsingError__Enum* create() {
            return il2cpp::create_object<app::ParsingError__Enum>(get_class());
        }
    } // namespace ParsingError__Enum
} // namespace app::classes::types

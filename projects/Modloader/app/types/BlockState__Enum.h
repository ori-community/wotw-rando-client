#pragma once
#include <Modloader/app/structs/BlockState__Enum.h>
#include <Modloader/app/structs/BlockState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlockState__Enum {
        inline app::BlockState__Enum__Class** type_info() {
            static app::BlockState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlockState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlockState__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlockState__Enum__Class>(type_info(), "Ionic.Zlib", "BlockState");
        }
        inline app::BlockState__Enum* create() {
            return il2cpp::create_object<app::BlockState__Enum>(get_class());
        }
    } // namespace BlockState__Enum
} // namespace app::classes::types

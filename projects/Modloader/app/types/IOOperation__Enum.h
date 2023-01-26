#pragma once
#include <Modloader/app/structs/IOOperation__Enum.h>
#include <Modloader/app/structs/IOOperation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOOperation__Enum {
        inline app::IOOperation__Enum__Class** type_info() {
            static app::IOOperation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IOOperation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IOOperation__Enum__Class* get_class() {
            return il2cpp::get_class<app::IOOperation__Enum__Class>(type_info(), "System", "IOOperation");
        }
        inline app::IOOperation__Enum* create() {
            return il2cpp::create_object<app::IOOperation__Enum>(get_class());
        }
    } // namespace IOOperation__Enum
} // namespace app::classes::types

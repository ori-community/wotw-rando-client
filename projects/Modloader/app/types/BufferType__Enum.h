#pragma once
#include <Modloader/app/structs/BufferType__Enum.h>
#include <Modloader/app/structs/BufferType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BufferType__Enum {
        inline app::BufferType__Enum__Class** type_info() {
            static app::BufferType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BufferType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BufferType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BufferType__Enum__Class>(type_info(), "System.Net", "BufferType");
        }
        inline app::BufferType__Enum* create() {
            return il2cpp::create_object<app::BufferType__Enum>(get_class());
        }
    } // namespace BufferType__Enum
} // namespace app::classes::types

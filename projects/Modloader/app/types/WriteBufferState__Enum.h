#pragma once
#include <Modloader/app/structs/WriteBufferState__Enum.h>
#include <Modloader/app/structs/WriteBufferState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteBufferState__Enum {
        inline app::WriteBufferState__Enum__Class** type_info() {
            static app::WriteBufferState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WriteBufferState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WriteBufferState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WriteBufferState__Enum__Class>(type_info(), "System.Net", "WriteBufferState");
        }
        inline app::WriteBufferState__Enum* create() {
            return il2cpp::create_object<app::WriteBufferState__Enum>(get_class());
        }
    } // namespace WriteBufferState__Enum
} // namespace app::classes::types

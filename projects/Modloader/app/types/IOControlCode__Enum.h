#pragma once
#include <Modloader/app/structs/IOControlCode__Enum.h>
#include <Modloader/app/structs/IOControlCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOControlCode__Enum {
        inline app::IOControlCode__Enum__Class** type_info() {
            static app::IOControlCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IOControlCode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IOControlCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::IOControlCode__Enum__Class>(type_info(), "System.Net.Sockets", "IOControlCode");
        }
        inline app::IOControlCode__Enum* create() {
            return il2cpp::create_object<app::IOControlCode__Enum>(get_class());
        }
    } // namespace IOControlCode__Enum
} // namespace app::classes::types

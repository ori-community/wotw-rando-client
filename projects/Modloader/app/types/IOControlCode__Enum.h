#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IOControlCode__Enum {
        namespace {
            inline app::IOControlCode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::IOControlCode__Enum__Class** type_info = &type_info_ref;
        inline app::IOControlCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::IOControlCode__Enum__Class>(type_info, "System.Net.Sockets", "IOControlCode");
        }
        inline app::IOControlCode__Enum* create() {
            return il2cpp::create_object<app::IOControlCode__Enum>(get_class());
        }
    } // namespace IOControlCode__Enum
} // namespace app::classes::types

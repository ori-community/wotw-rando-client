#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BufferType__Enum {
        namespace {
            inline app::BufferType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BufferType__Enum__Class** type_info = &type_info_ref;
        inline app::BufferType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BufferType__Enum__Class>(type_info, "System.Net", "BufferType");
        }
        inline app::BufferType__Enum* create() {
            return il2cpp::create_object<app::BufferType__Enum>(get_class());
        }
    } // namespace BufferType__Enum
} // namespace app::classes::types

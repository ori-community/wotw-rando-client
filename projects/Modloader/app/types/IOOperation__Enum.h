#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IOOperation__Enum {
        namespace {
            inline app::IOOperation__Enum__Class* type_info_ref = nullptr;
        }
        inline app::IOOperation__Enum__Class** type_info = &type_info_ref;
        inline app::IOOperation__Enum__Class* get_class() {
            return il2cpp::get_class<app::IOOperation__Enum__Class>(type_info, "System", "IOOperation");
        }
        inline app::IOOperation__Enum* create() {
            return il2cpp::create_object<app::IOOperation__Enum>(get_class());
        }
    } // namespace IOOperation__Enum
} // namespace app::classes::types

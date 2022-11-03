#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileAttributes__Enum {
        namespace {
            inline app::FileAttributes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FileAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::FileAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileAttributes__Enum__Class>(type_info, "System.IO", "FileAttributes");
        }
        inline app::FileAttributes__Enum* create() {
            return il2cpp::create_object<app::FileAttributes__Enum>(get_class());
        }
    } // namespace FileAttributes__Enum
} // namespace app::classes::types

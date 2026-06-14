#pragma once
#include <Modloader/app/structs/FileAttributes__Enum.h>
#include <Modloader/app/structs/FileAttributes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileAttributes__Enum {
        inline app::FileAttributes__Enum__Class** type_info() {
            static app::FileAttributes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FileAttributes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FileAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileAttributes__Enum__Class>(type_info(), "System.IO", "FileAttributes");
        }
        inline app::FileAttributes__Enum* create() {
            return il2cpp::create_object<app::FileAttributes__Enum>(get_class());
        }
    } // namespace FileAttributes__Enum
} // namespace app::classes::types

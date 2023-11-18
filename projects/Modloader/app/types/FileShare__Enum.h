#pragma once
#include <Modloader/app/structs/FileShare__Enum.h>
#include <Modloader/app/structs/FileShare__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileShare__Enum {
        inline app::FileShare__Enum__Class** type_info() {
            static app::FileShare__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FileShare__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FileShare__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileShare__Enum__Class>(type_info(), "System.IO", "FileShare");
        }
        inline app::FileShare__Enum* create() {
            return il2cpp::create_object<app::FileShare__Enum>(get_class());
        }
    } // namespace FileShare__Enum
} // namespace app::classes::types

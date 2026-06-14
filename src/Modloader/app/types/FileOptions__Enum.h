#pragma once
#include <Modloader/app/structs/FileOptions__Enum.h>
#include <Modloader/app/structs/FileOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileOptions__Enum {
        inline app::FileOptions__Enum__Class** type_info() {
            static app::FileOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FileOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FileOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileOptions__Enum__Class>(type_info(), "System.IO", "FileOptions");
        }
        inline app::FileOptions__Enum* create() {
            return il2cpp::create_object<app::FileOptions__Enum>(get_class());
        }
    } // namespace FileOptions__Enum
} // namespace app::classes::types

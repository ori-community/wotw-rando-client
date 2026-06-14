#pragma once
#include <Modloader/app/structs/FileSystemInfo.h>
#include <Modloader/app/structs/FileSystemInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileSystemInfo {
        inline app::FileSystemInfo__Class** type_info() {
            static app::FileSystemInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FileSystemInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FileSystemInfo__Class* get_class() {
            return il2cpp::get_class<app::FileSystemInfo__Class>(type_info(), "System.IO", "FileSystemInfo");
        }
        inline app::FileSystemInfo* create() {
            return il2cpp::create_object<app::FileSystemInfo>(get_class());
        }
    } // namespace FileSystemInfo
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/FileSystemWatcher.h>
#include <Modloader/app/structs/FileSystemWatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileSystemWatcher {
        inline app::FileSystemWatcher__Class** type_info() {
            static app::FileSystemWatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FileSystemWatcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FileSystemWatcher__Class* get_class() {
            return il2cpp::get_class<app::FileSystemWatcher__Class>(type_info(), "System.IO", "FileSystemWatcher");
        }
        inline app::FileSystemWatcher* create() {
            return il2cpp::create_object<app::FileSystemWatcher>(get_class());
        }
    } // namespace FileSystemWatcher
} // namespace app::classes::types

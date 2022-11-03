#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileSystemWatcher {
        namespace {
            inline app::FileSystemWatcher__Class* type_info_ref = nullptr;
        }
        inline app::FileSystemWatcher__Class** type_info = &type_info_ref;
        inline app::FileSystemWatcher__Class* get_class() {
            return il2cpp::get_class<app::FileSystemWatcher__Class>(type_info, "System.IO", "FileSystemWatcher");
        }
        inline app::FileSystemWatcher* create() {
            return il2cpp::create_object<app::FileSystemWatcher>(get_class());
        }
    } // namespace FileSystemWatcher
} // namespace app::classes::types

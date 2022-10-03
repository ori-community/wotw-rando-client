#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileSystemWatcher {
        namespace {
            app::FileSystemWatcher__Class* type_info_ref = nullptr;
        }
        app::FileSystemWatcher__Class** type_info = &type_info_ref;
        inline app::FileSystemWatcher__Class* get_class() {
            return il2cpp::get_class<app::FileSystemWatcher__Class>(type_info, "System.IO", "FileSystemWatcher");
        }
        inline app::FileSystemWatcher* create() {
            return il2cpp::create_object<app::FileSystemWatcher>(get_class());
        }
    } // namespace FileSystemWatcher
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileSystemInfo {
        namespace {
            app::FileSystemInfo__Class* type_info_ref = nullptr;
        }
        app::FileSystemInfo__Class** type_info = &type_info_ref;
        inline app::FileSystemInfo__Class* get_class() {
            return il2cpp::get_class<app::FileSystemInfo__Class>(type_info, "System.IO", "FileSystemInfo");
        }
        inline app::FileSystemInfo* create() {
            return il2cpp::create_object<app::FileSystemInfo>(get_class());
        }
    } // namespace FileSystemInfo
} // namespace app::classes::types

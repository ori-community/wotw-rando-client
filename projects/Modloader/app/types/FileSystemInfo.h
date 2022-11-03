#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileSystemInfo {
        namespace {
            inline app::FileSystemInfo__Class* type_info_ref = nullptr;
        }
        inline app::FileSystemInfo__Class** type_info = &type_info_ref;
        inline app::FileSystemInfo__Class* get_class() {
            return il2cpp::get_class<app::FileSystemInfo__Class>(type_info, "System.IO", "FileSystemInfo");
        }
        inline app::FileSystemInfo* create() {
            return il2cpp::create_object<app::FileSystemInfo>(get_class());
        }
    } // namespace FileSystemInfo
} // namespace app::classes::types

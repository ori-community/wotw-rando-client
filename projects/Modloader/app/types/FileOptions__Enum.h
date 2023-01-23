#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FileOptions__Enum__Class.h>
#include <Modloader/app/structs/FileOptions__Enum.h>

namespace app::classes::types {
    namespace FileOptions__Enum {
        namespace {
            inline app::FileOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FileOptions__Enum__Class** type_info = &type_info_ref;
        inline app::FileOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileOptions__Enum__Class>(type_info, "System.IO", "FileOptions");
        }
        inline app::FileOptions__Enum* create() {
            return il2cpp::create_object<app::FileOptions__Enum>(get_class());
        }
    } // namespace FileOptions__Enum
} // namespace app::classes::types

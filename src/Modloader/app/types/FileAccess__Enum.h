#pragma once
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/FileAccess__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileAccess__Enum {
        inline app::FileAccess__Enum__Class** type_info() {
            static app::FileAccess__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileAccess__Enum__Class**)(modloader::win::memory::resolve_rva(0x04793B70));
            }
            return cache;
        }
        inline app::FileAccess__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileAccess__Enum__Class>(type_info(), "System.IO", "FileAccess");
        }
        inline app::FileAccess__Enum* create() {
            return il2cpp::create_object<app::FileAccess__Enum>(get_class());
        }
    } // namespace FileAccess__Enum
} // namespace app::classes::types

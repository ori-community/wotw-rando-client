#pragma once
#include <Modloader/app/structs/FileMode__Enum.h>
#include <Modloader/app/structs/FileMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileMode__Enum {
        inline app::FileMode__Enum__Class** type_info() {
            static app::FileMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047086A8));
            }
            return cache;
        }
        inline app::FileMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FileMode__Enum__Class>(type_info(), "System.IO", "FileMode");
        }
        inline app::FileMode__Enum* create() {
            return il2cpp::create_object<app::FileMode__Enum>(get_class());
        }
    } // namespace FileMode__Enum
} // namespace app::classes::types

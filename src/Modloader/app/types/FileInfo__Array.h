#pragma once
#include <Modloader/app/structs/FileInfo__Array.h>
#include <Modloader/app/structs/FileInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileInfo__Array {
        inline app::FileInfo__Array__Class** type_info() {
            static app::FileInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04737E18));
            }
            return cache;
        }
        inline app::FileInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::FileInfo__Array__Class>(type_info(), "System.IO", "FileInfo[]");
        }
        inline app::FileInfo__Array* create() {
            return il2cpp::create_object<app::FileInfo__Array>(get_class());
        }
    } // namespace FileInfo__Array
} // namespace app::classes::types

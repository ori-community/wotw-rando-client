#pragma once
#include <Modloader/app/structs/FileLoadException.h>
#include <Modloader/app/structs/FileLoadException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileLoadException {
        inline app::FileLoadException__Class** type_info() {
            static app::FileLoadException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileLoadException__Class**)(modloader::win::memory::resolve_rva(0x04718730));
            }
            return cache;
        }
        inline app::FileLoadException__Class* get_class() {
            return il2cpp::get_class<app::FileLoadException__Class>(type_info(), "System.IO", "FileLoadException");
        }
        inline app::FileLoadException* create() {
            return il2cpp::create_object<app::FileLoadException>(get_class());
        }
    } // namespace FileLoadException
} // namespace app::classes::types

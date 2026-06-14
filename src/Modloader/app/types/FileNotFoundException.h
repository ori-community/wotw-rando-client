#pragma once
#include <Modloader/app/structs/FileNotFoundException.h>
#include <Modloader/app/structs/FileNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileNotFoundException {
        inline app::FileNotFoundException__Class** type_info() {
            static app::FileNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04713D80));
            }
            return cache;
        }
        inline app::FileNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::FileNotFoundException__Class>(type_info(), "System.IO", "FileNotFoundException");
        }
        inline app::FileNotFoundException* create() {
            return il2cpp::create_object<app::FileNotFoundException>(get_class());
        }
    } // namespace FileNotFoundException
} // namespace app::classes::types

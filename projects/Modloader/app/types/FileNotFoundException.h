#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FileNotFoundException__Class.h>
#include <Modloader/app/structs/FileNotFoundException.h>

namespace app::classes::types {
    namespace FileNotFoundException {
        inline app::FileNotFoundException__Class** type_info = (app::FileNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04713D80));
        inline app::FileNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::FileNotFoundException__Class>(type_info, "System.IO", "FileNotFoundException");
        }
        inline app::FileNotFoundException* create() {
            return il2cpp::create_object<app::FileNotFoundException>(get_class());
        }
    } // namespace FileNotFoundException
} // namespace app::classes::types

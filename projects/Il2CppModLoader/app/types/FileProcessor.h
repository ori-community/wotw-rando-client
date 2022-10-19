#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileProcessor {
        inline app::FileProcessor__Class** type_info = (app::FileProcessor__Class**)(modloader::win::memory::resolve_rva(0x04763BC8));
        inline app::FileProcessor__Class* get_class() {
            return il2cpp::get_class<app::FileProcessor__Class>(type_info, "TriangleNet.IO", "FileProcessor");
        }
        inline app::FileProcessor* create() {
            return il2cpp::create_object<app::FileProcessor>(get_class());
        }
    } // namespace FileProcessor
} // namespace app::classes::types

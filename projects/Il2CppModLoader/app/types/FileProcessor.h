#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileProcessor__Class** type_info;
        inline app::FileProcessor__Class* get_class() {
            return il2cpp::get_class<app::FileProcessor__Class>(type_info, "TriangleNet.IO", "FileProcessor");
        }
        inline app::FileProcessor* create() {
            return il2cpp::create_object<app::FileProcessor>(get_class());
        }
    } // namespace FileProcessor
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFileFormat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFileFormat__Class** type_info;
        inline app::IFileFormat__Class* get_class() {
            return il2cpp::get_class<app::IFileFormat__Class>(type_info, "TriangleNet.IO", "IFileFormat");
        }
        inline app::IFileFormat* create() {
            return il2cpp::create_object<app::IFileFormat>(get_class());
        }
        inline app::IFileFormat__Array* create_array(int size) {
            return il2cpp::array_new<app::IFileFormat__Array>(get_class(), size);
        }
    } // namespace IFileFormat
} // namespace app::classes::types

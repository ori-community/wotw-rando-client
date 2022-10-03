#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriangleWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriangleWriter__Class** type_info;
        inline app::TriangleWriter__Class* get_class() {
            return il2cpp::get_class<app::TriangleWriter__Class>(type_info, "TriangleNet.IO", "TriangleWriter");
        }
        inline app::TriangleWriter* create() {
            return il2cpp::create_object<app::TriangleWriter>(get_class());
        }
    } // namespace TriangleWriter
} // namespace app::classes::types

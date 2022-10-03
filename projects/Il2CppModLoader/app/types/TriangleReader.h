#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriangleReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriangleReader__Class** type_info;
        inline app::TriangleReader__Class* get_class() {
            return il2cpp::get_class<app::TriangleReader__Class>(type_info, "TriangleNet.IO", "TriangleReader");
        }
        inline app::TriangleReader* create() {
            return il2cpp::create_object<app::TriangleReader>(get_class());
        }
    } // namespace TriangleReader
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriangleWriter {
        inline app::TriangleWriter__Class** type_info = (app::TriangleWriter__Class**)(modloader::win::memory::resolve_rva(0x04705600));
        inline app::TriangleWriter__Class* get_class() {
            return il2cpp::get_class<app::TriangleWriter__Class>(type_info, "TriangleNet.IO", "TriangleWriter");
        }
        inline app::TriangleWriter* create() {
            return il2cpp::create_object<app::TriangleWriter>(get_class());
        }
    } // namespace TriangleWriter
} // namespace app::classes::types

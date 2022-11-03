#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFileFormat {
        inline app::IFileFormat__Class** type_info = (app::IFileFormat__Class**)(modloader::win::memory::resolve_rva(0x04788A08));
        inline app::IFileFormat__Class* get_class() {
            return il2cpp::get_class<app::IFileFormat__Class>(type_info, "TriangleNet.IO", "IFileFormat");
        }
        inline app::IFileFormat__Array* create_array(int size) {
            return il2cpp::array_new<app::IFileFormat__Array>(get_class(), size);
        }
        inline app::IFileFormat__Array* create_array(const std::vector<app::IFileFormat*>& items) {
            return il2cpp::array_new<app::IFileFormat__Array>(get_class(), items);
        }
    } // namespace IFileFormat
} // namespace app::classes::types

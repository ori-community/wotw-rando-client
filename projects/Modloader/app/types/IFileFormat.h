#pragma once
#include <Modloader/app/structs/IFileFormat.h>
#include <Modloader/app/structs/IFileFormat__Array.h>
#include <Modloader/app/structs/IFileFormat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFileFormat {
        inline app::IFileFormat__Class** type_info() {
            static app::IFileFormat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFileFormat__Class**)(modloader::win::memory::resolve_rva(0x04788A08));
            }
            return cache;
        }
        inline app::IFileFormat__Class* get_class() {
            return il2cpp::get_class<app::IFileFormat__Class>(type_info(), "TriangleNet.IO", "IFileFormat");
        }
        inline app::IFileFormat__Array* create_array(int size) {
            return il2cpp::array_new<app::IFileFormat__Array>(get_class(), size);
        }
        inline app::IFileFormat__Array* create_array(const std::vector<app::IFileFormat*>& items) {
            return il2cpp::array_new<app::IFileFormat__Array>(get_class(), items);
        }
    } // namespace IFileFormat
} // namespace app::classes::types

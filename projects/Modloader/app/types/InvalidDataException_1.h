#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvalidDataException_1 {
        inline app::InvalidDataException_1__Class** type_info = (app::InvalidDataException_1__Class**)(modloader::win::memory::resolve_rva(0x0474BD08));
        inline app::InvalidDataException_1__Class* get_class() {
            return il2cpp::get_class<app::InvalidDataException_1__Class>(type_info, "Unity.IO.Compression", "InvalidDataException");
        }
        inline app::InvalidDataException_1* create() {
            return il2cpp::create_object<app::InvalidDataException_1>(get_class());
        }
    } // namespace InvalidDataException_1
} // namespace app::classes::types

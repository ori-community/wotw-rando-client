#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Crc32Helper__Class.h>
#include <Modloader/app/structs/Crc32Helper.h>

namespace app::classes::types {
    namespace Crc32Helper {
        inline app::Crc32Helper__Class** type_info = (app::Crc32Helper__Class**)(modloader::win::memory::resolve_rva(0x04747890));
        inline app::Crc32Helper__Class* get_class() {
            return il2cpp::get_class<app::Crc32Helper__Class>(type_info, "Unity.IO.Compression", "Crc32Helper");
        }
        inline app::Crc32Helper* create() {
            return il2cpp::create_object<app::Crc32Helper>(get_class());
        }
    } // namespace Crc32Helper
} // namespace app::classes::types

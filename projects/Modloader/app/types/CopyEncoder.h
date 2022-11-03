#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CopyEncoder {
        inline app::CopyEncoder__Class** type_info = (app::CopyEncoder__Class**)(modloader::win::memory::resolve_rva(0x04739AD0));
        inline app::CopyEncoder__Class* get_class() {
            return il2cpp::get_class<app::CopyEncoder__Class>(type_info, "Unity.IO.Compression", "CopyEncoder");
        }
        inline app::CopyEncoder* create() {
            return il2cpp::create_object<app::CopyEncoder>(get_class());
        }
    } // namespace CopyEncoder
} // namespace app::classes::types

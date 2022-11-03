#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FileStream_ReadDelegate {
        inline app::FileStream_ReadDelegate__Class** type_info = (app::FileStream_ReadDelegate__Class**)(modloader::win::memory::resolve_rva(0x04792610));
        inline app::FileStream_ReadDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FileStream_ReadDelegate__Class>(type_info, "System.IO", "FileStream", "ReadDelegate");
        }
        inline app::FileStream_ReadDelegate* create() {
            return il2cpp::create_object<app::FileStream_ReadDelegate>(get_class());
        }
    } // namespace FileStream_ReadDelegate
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeflateStream_ReadMethod__Class.h>
#include <Modloader/app/structs/DeflateStream_ReadMethod.h>

namespace app::classes::types {
    namespace DeflateStream_ReadMethod {
        inline app::DeflateStream_ReadMethod__Class** type_info = (app::DeflateStream_ReadMethod__Class**)(modloader::win::memory::resolve_rva(0x04710078));
        inline app::DeflateStream_ReadMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStream_ReadMethod__Class>(type_info, "System.IO.Compression", "DeflateStream", "ReadMethod");
        }
        inline app::DeflateStream_ReadMethod* create() {
            return il2cpp::create_object<app::DeflateStream_ReadMethod>(get_class());
        }
    } // namespace DeflateStream_ReadMethod
} // namespace app::classes::types

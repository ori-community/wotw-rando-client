#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeflateStream_WriteMethod__Class.h>
#include <Modloader/app/structs/DeflateStream_WriteMethod.h>

namespace app::classes::types {
    namespace DeflateStream_WriteMethod {
        inline app::DeflateStream_WriteMethod__Class** type_info = (app::DeflateStream_WriteMethod__Class**)(modloader::win::memory::resolve_rva(0x0475A990));
        inline app::DeflateStream_WriteMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStream_WriteMethod__Class>(type_info, "System.IO.Compression", "DeflateStream", "WriteMethod");
        }
        inline app::DeflateStream_WriteMethod* create() {
            return il2cpp::create_object<app::DeflateStream_WriteMethod>(get_class());
        }
    } // namespace DeflateStream_WriteMethod
} // namespace app::classes::types

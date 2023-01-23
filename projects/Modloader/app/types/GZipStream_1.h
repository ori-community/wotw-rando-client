#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GZipStream_1__Class.h>
#include <Modloader/app/structs/GZipStream_1.h>

namespace app::classes::types {
    namespace GZipStream_1 {
        inline app::GZipStream_1__Class** type_info = (app::GZipStream_1__Class**)(modloader::win::memory::resolve_rva(0x0478E0B0));
        inline app::GZipStream_1__Class* get_class() {
            return il2cpp::get_class<app::GZipStream_1__Class>(type_info, "Ionic.Zlib", "GZipStream");
        }
        inline app::GZipStream_1* create() {
            return il2cpp::create_object<app::GZipStream_1>(get_class());
        }
    } // namespace GZipStream_1
} // namespace app::classes::types

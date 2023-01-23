#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GZipStream_2__Class.h>
#include <Modloader/app/structs/GZipStream_2.h>

namespace app::classes::types {
    namespace GZipStream_2 {
        inline app::GZipStream_2__Class** type_info = (app::GZipStream_2__Class**)(modloader::win::memory::resolve_rva(0x0478F710));
        inline app::GZipStream_2__Class* get_class() {
            return il2cpp::get_class<app::GZipStream_2__Class>(type_info, "Unity.IO.Compression", "GZipStream");
        }
        inline app::GZipStream_2* create() {
            return il2cpp::create_object<app::GZipStream_2>(get_class());
        }
    } // namespace GZipStream_2
} // namespace app::classes::types

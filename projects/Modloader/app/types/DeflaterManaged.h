#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflaterManaged {
        inline app::DeflaterManaged__Class** type_info = (app::DeflaterManaged__Class**)(modloader::win::memory::resolve_rva(0x04754060));
        inline app::DeflaterManaged__Class* get_class() {
            return il2cpp::get_class<app::DeflaterManaged__Class>(type_info, "Unity.IO.Compression", "DeflaterManaged");
        }
        inline app::DeflaterManaged* create() {
            return il2cpp::create_object<app::DeflaterManaged>(get_class());
        }
    } // namespace DeflaterManaged
} // namespace app::classes::types

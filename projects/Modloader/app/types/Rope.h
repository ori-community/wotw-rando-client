#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rope {
        inline app::Rope__Class** type_info = (app::Rope__Class**)(modloader::win::memory::resolve_rva(0x0477D068));
        inline app::Rope__Class* get_class() {
            return il2cpp::get_class<app::Rope__Class>(type_info, "", "Rope");
        }
        inline app::Rope* create() {
            return il2cpp::create_object<app::Rope>(get_class());
        }
    } // namespace Rope
} // namespace app::classes::types

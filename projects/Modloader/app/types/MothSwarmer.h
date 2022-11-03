#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MothSwarmer {
        inline app::MothSwarmer__Class** type_info = (app::MothSwarmer__Class**)(modloader::win::memory::resolve_rva(0x04701C58));
        inline app::MothSwarmer__Class* get_class() {
            return il2cpp::get_class<app::MothSwarmer__Class>(type_info, "", "MothSwarmer");
        }
        inline app::MothSwarmer* create() {
            return il2cpp::create_object<app::MothSwarmer>(get_class());
        }
    } // namespace MothSwarmer
} // namespace app::classes::types

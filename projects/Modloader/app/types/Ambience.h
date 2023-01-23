#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Ambience__Class.h>
#include <Modloader/app/structs/Ambience.h>

namespace app::classes::types {
    namespace Ambience {
        inline app::Ambience__Class** type_info = (app::Ambience__Class**)(modloader::win::memory::resolve_rva(0x04743718));
        inline app::Ambience__Class* get_class() {
            return il2cpp::get_class<app::Ambience__Class>(type_info, "Core", "Ambience");
        }
        inline app::Ambience* create() {
            return il2cpp::create_object<app::Ambience>(get_class());
        }
    } // namespace Ambience
} // namespace app::classes::types

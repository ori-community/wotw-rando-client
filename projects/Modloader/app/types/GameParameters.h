#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameParameters {
        inline app::GameParameters__Class** type_info = (app::GameParameters__Class**)(modloader::win::memory::resolve_rva(0x04797D08));
        inline app::GameParameters__Class* get_class() {
            return il2cpp::get_class<app::GameParameters__Class>(type_info, "", "GameParameters");
        }
        inline app::GameParameters* create() {
            return il2cpp::create_object<app::GameParameters>(get_class());
        }
    } // namespace GameParameters
} // namespace app::classes::types

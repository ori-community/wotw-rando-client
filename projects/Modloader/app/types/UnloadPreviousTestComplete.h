#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnloadPreviousTestComplete {
        inline app::UnloadPreviousTestComplete__Class** type_info = (app::UnloadPreviousTestComplete__Class**)(modloader::win::memory::resolve_rva(0x047369C0));
        inline app::UnloadPreviousTestComplete__Class* get_class() {
            return il2cpp::get_class<app::UnloadPreviousTestComplete__Class>(type_info, "", "UnloadPreviousTestComplete");
        }
        inline app::UnloadPreviousTestComplete* create() {
            return il2cpp::create_object<app::UnloadPreviousTestComplete>(get_class());
        }
    } // namespace UnloadPreviousTestComplete
} // namespace app::classes::types

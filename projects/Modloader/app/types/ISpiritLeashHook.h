#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISpiritLeashHook__Class.h>

namespace app::classes::types {
    namespace ISpiritLeashHook {
        inline app::ISpiritLeashHook__Class** type_info = (app::ISpiritLeashHook__Class**)(modloader::win::memory::resolve_rva(0x0475BCA0));
        inline app::ISpiritLeashHook__Class* get_class() {
            return il2cpp::get_class<app::ISpiritLeashHook__Class>(type_info, "", "ISpiritLeashHook");
        }
    } // namespace ISpiritLeashHook
} // namespace app::classes::types

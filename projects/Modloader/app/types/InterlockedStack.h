#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InterlockedStack {
        inline app::InterlockedStack__Class** type_info = (app::InterlockedStack__Class**)(modloader::win::memory::resolve_rva(0x04761390));
        inline app::InterlockedStack__Class* get_class() {
            return il2cpp::get_class<app::InterlockedStack__Class>(type_info, "System.Net", "InterlockedStack");
        }
        inline app::InterlockedStack* create() {
            return il2cpp::create_object<app::InterlockedStack>(get_class());
        }
    } // namespace InterlockedStack
} // namespace app::classes::types

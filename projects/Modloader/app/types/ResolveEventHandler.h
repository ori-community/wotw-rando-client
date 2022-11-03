#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResolveEventHandler {
        inline app::ResolveEventHandler__Class** type_info = (app::ResolveEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0478F5B8));
        inline app::ResolveEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ResolveEventHandler__Class>(type_info, "System", "ResolveEventHandler");
        }
        inline app::ResolveEventHandler* create() {
            return il2cpp::create_object<app::ResolveEventHandler>(get_class());
        }
    } // namespace ResolveEventHandler
} // namespace app::classes::types

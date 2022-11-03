#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpenReadCompletedEventHandler {
        inline app::OpenReadCompletedEventHandler__Class** type_info = (app::OpenReadCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471B8A0));
        inline app::OpenReadCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::OpenReadCompletedEventHandler__Class>(type_info, "System.Net", "OpenReadCompletedEventHandler");
        }
        inline app::OpenReadCompletedEventHandler* create() {
            return il2cpp::create_object<app::OpenReadCompletedEventHandler>(get_class());
        }
    } // namespace OpenReadCompletedEventHandler
} // namespace app::classes::types

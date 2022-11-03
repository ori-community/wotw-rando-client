#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpenReadCompletedEventArgs {
        inline app::OpenReadCompletedEventArgs__Class** type_info = (app::OpenReadCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04722C18));
        inline app::OpenReadCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::OpenReadCompletedEventArgs__Class>(type_info, "System.Net", "OpenReadCompletedEventArgs");
        }
        inline app::OpenReadCompletedEventArgs* create() {
            return il2cpp::create_object<app::OpenReadCompletedEventArgs>(get_class());
        }
    } // namespace OpenReadCompletedEventArgs
} // namespace app::classes::types

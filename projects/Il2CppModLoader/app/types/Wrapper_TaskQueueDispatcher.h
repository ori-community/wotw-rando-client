#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Wrapper_TaskQueueDispatcher {
        inline app::Wrapper_TaskQueueDispatcher__Class** type_info = (app::Wrapper_TaskQueueDispatcher__Class**)(modloader::win::memory::resolve_rva(0x047716D8));
        inline app::Wrapper_TaskQueueDispatcher__Class* get_class() {
            return il2cpp::get_nested_class<app::Wrapper_TaskQueueDispatcher__Class>(type_info, "Grdk", "Wrapper", "TaskQueueDispatcher");
        }
        inline app::Wrapper_TaskQueueDispatcher* create() {
            return il2cpp::create_object<app::Wrapper_TaskQueueDispatcher>(get_class());
        }
    } // namespace Wrapper_TaskQueueDispatcher
} // namespace app::classes::types

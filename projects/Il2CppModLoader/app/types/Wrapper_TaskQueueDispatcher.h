#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Wrapper_TaskQueueDispatcher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Wrapper_TaskQueueDispatcher__Class** type_info;
        inline app::Wrapper_TaskQueueDispatcher__Class* get_class() {
            return il2cpp::get_nested_class<app::Wrapper_TaskQueueDispatcher__Class>(type_info, "Grdk", "Wrapper", "TaskQueueDispatcher");
        }
        inline app::Wrapper_TaskQueueDispatcher* create() {
            return il2cpp::create_object<app::Wrapper_TaskQueueDispatcher>(get_class());
        }
    } // namespace Wrapper_TaskQueueDispatcher
} // namespace app::classes::types

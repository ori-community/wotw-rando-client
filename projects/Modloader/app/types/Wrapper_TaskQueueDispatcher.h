#pragma once
#include <Modloader/app/structs/Wrapper_TaskQueueDispatcher.h>
#include <Modloader/app/structs/Wrapper_TaskQueueDispatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Wrapper_TaskQueueDispatcher {
        inline app::Wrapper_TaskQueueDispatcher__Class** type_info() {
            static app::Wrapper_TaskQueueDispatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Wrapper_TaskQueueDispatcher__Class**)(modloader::win::memory::resolve_rva(0x047716D8));
            }
            return cache;
        }
        inline app::Wrapper_TaskQueueDispatcher__Class* get_class() {
            return il2cpp::get_nested_class<app::Wrapper_TaskQueueDispatcher__Class>(type_info(), "Grdk", "Wrapper", "TaskQueueDispatcher");
        }
        inline app::Wrapper_TaskQueueDispatcher* create() {
            return il2cpp::create_object<app::Wrapper_TaskQueueDispatcher>(get_class());
        }
    } // namespace Wrapper_TaskQueueDispatcher
} // namespace app::classes::types

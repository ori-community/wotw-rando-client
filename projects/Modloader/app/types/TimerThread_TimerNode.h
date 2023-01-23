#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimerThread_TimerNode__Class.h>
#include <Modloader/app/structs/TimerThread_TimerNode.h>

namespace app::classes::types {
    namespace TimerThread_TimerNode {
        inline app::TimerThread_TimerNode__Class** type_info = (app::TimerThread_TimerNode__Class**)(modloader::win::memory::resolve_rva(0x047548B8));
        inline app::TimerThread_TimerNode__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerNode__Class>(type_info, "System.Net", "TimerThread", "TimerNode");
        }
        inline app::TimerThread_TimerNode* create() {
            return il2cpp::create_object<app::TimerThread_TimerNode>(get_class());
        }
    } // namespace TimerThread_TimerNode
} // namespace app::classes::types

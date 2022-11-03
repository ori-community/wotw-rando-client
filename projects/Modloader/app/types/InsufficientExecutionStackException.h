#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InsufficientExecutionStackException {
        inline app::InsufficientExecutionStackException__Class** type_info = (app::InsufficientExecutionStackException__Class**)(modloader::win::memory::resolve_rva(0x04756868));
        inline app::InsufficientExecutionStackException__Class* get_class() {
            return il2cpp::get_class<app::InsufficientExecutionStackException__Class>(type_info, "System", "InsufficientExecutionStackException");
        }
        inline app::InsufficientExecutionStackException* create() {
            return il2cpp::create_object<app::InsufficientExecutionStackException>(get_class());
        }
    } // namespace InsufficientExecutionStackException
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TaskContinuation__Class.h>
#include <Modloader/app/structs/TaskContinuation.h>

namespace app::classes::types {
    namespace TaskContinuation {
        inline app::TaskContinuation__Class** type_info = (app::TaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x04714098));
        inline app::TaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::TaskContinuation__Class>(type_info, "System.Threading.Tasks", "TaskContinuation");
        }
        inline app::TaskContinuation* create() {
            return il2cpp::create_object<app::TaskContinuation>(get_class());
        }
    } // namespace TaskContinuation
} // namespace app::classes::types

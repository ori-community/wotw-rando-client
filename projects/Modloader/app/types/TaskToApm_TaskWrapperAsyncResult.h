#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskToApm_TaskWrapperAsyncResult {
        inline app::TaskToApm_TaskWrapperAsyncResult__Class** type_info = (app::TaskToApm_TaskWrapperAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04733CD8));
        inline app::TaskToApm_TaskWrapperAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskToApm_TaskWrapperAsyncResult__Class>(type_info, "System.Threading.Tasks", "TaskToApm", "TaskWrapperAsyncResult");
        }
        inline app::TaskToApm_TaskWrapperAsyncResult* create() {
            return il2cpp::create_object<app::TaskToApm_TaskWrapperAsyncResult>(get_class());
        }
    } // namespace TaskToApm_TaskWrapperAsyncResult
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/TaskToApm_TaskWrapperAsyncResult.h>
#include <Modloader/app/structs/TaskToApm_TaskWrapperAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskToApm_TaskWrapperAsyncResult {
        inline app::TaskToApm_TaskWrapperAsyncResult__Class** type_info() {
            static app::TaskToApm_TaskWrapperAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskToApm_TaskWrapperAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04733CD8));
            }
            return cache;
        }
        inline app::TaskToApm_TaskWrapperAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskToApm_TaskWrapperAsyncResult__Class>(type_info(), "System.Threading.Tasks", "TaskToApm", "TaskWrapperAsyncResult");
        }
        inline app::TaskToApm_TaskWrapperAsyncResult* create() {
            return il2cpp::create_object<app::TaskToApm_TaskWrapperAsyncResult>(get_class());
        }
    } // namespace TaskToApm_TaskWrapperAsyncResult
} // namespace app::classes::types

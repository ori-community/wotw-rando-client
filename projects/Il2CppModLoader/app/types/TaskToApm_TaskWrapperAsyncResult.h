#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskToApm_TaskWrapperAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskToApm_TaskWrapperAsyncResult__Class** type_info;
        inline app::TaskToApm_TaskWrapperAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskToApm_TaskWrapperAsyncResult__Class>(type_info, "System.Threading.Tasks", "TaskToApm", "TaskWrapperAsyncResult");
        }
        inline app::TaskToApm_TaskWrapperAsyncResult* create() {
            return il2cpp::create_object<app::TaskToApm_TaskWrapperAsyncResult>(get_class());
        }
    } // namespace TaskToApm_TaskWrapperAsyncResult
} // namespace app::classes::types

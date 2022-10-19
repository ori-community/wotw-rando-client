#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TaskFactory_CompleteOnInvokePromise {
        inline app::TaskFactory_CompleteOnInvokePromise__Class** type_info = (app::TaskFactory_CompleteOnInvokePromise__Class**)(modloader::win::memory::resolve_rva(0x04750978));
        inline app::TaskFactory_CompleteOnInvokePromise__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskFactory_CompleteOnInvokePromise__Class>(type_info, "System.Threading.Tasks", "TaskFactory", "CompleteOnInvokePromise");
        }
        inline app::TaskFactory_CompleteOnInvokePromise* create() {
            return il2cpp::create_object<app::TaskFactory_CompleteOnInvokePromise>(get_class());
        }
    } // namespace TaskFactory_CompleteOnInvokePromise
} // namespace app::classes::types

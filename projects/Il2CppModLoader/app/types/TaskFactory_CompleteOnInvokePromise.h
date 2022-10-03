#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskFactory_CompleteOnInvokePromise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskFactory_CompleteOnInvokePromise__Class** type_info;
        inline app::TaskFactory_CompleteOnInvokePromise__Class* get_class() {
            return il2cpp::get_nested_class<app::TaskFactory_CompleteOnInvokePromise__Class>(type_info, "System.Threading.Tasks", "TaskFactory", "CompleteOnInvokePromise");
        }
        inline app::TaskFactory_CompleteOnInvokePromise* create() {
            return il2cpp::create_object<app::TaskFactory_CompleteOnInvokePromise>(get_class());
        }
    } // namespace TaskFactory_CompleteOnInvokePromise
} // namespace app::classes::types

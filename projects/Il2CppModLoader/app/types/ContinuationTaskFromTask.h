#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContinuationTaskFromTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContinuationTaskFromTask__Class** type_info;
        inline app::ContinuationTaskFromTask__Class* get_class() {
            return il2cpp::get_class<app::ContinuationTaskFromTask__Class>(type_info, "System.Threading.Tasks", "ContinuationTaskFromTask");
        }
        inline app::ContinuationTaskFromTask* create() {
            return il2cpp::create_object<app::ContinuationTaskFromTask>(get_class());
        }
    } // namespace ContinuationTaskFromTask
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContinuationTaskFromTask {
        inline app::ContinuationTaskFromTask__Class** type_info = (app::ContinuationTaskFromTask__Class**)(modloader::win::memory::resolve_rva(0x0473BD00));
        inline app::ContinuationTaskFromTask__Class* get_class() {
            return il2cpp::get_class<app::ContinuationTaskFromTask__Class>(type_info, "System.Threading.Tasks", "ContinuationTaskFromTask");
        }
        inline app::ContinuationTaskFromTask* create() {
            return il2cpp::create_object<app::ContinuationTaskFromTask>(get_class());
        }
    } // namespace ContinuationTaskFromTask
} // namespace app::classes::types

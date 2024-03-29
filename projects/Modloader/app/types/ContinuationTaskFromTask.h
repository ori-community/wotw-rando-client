#pragma once
#include <Modloader/app/structs/ContinuationTaskFromTask.h>
#include <Modloader/app/structs/ContinuationTaskFromTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContinuationTaskFromTask {
        inline app::ContinuationTaskFromTask__Class** type_info() {
            static app::ContinuationTaskFromTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContinuationTaskFromTask__Class**)(modloader::win::memory::resolve_rva(0x0473BD00));
            }
            return cache;
        }
        inline app::ContinuationTaskFromTask__Class* get_class() {
            return il2cpp::get_class<app::ContinuationTaskFromTask__Class>(type_info(), "System.Threading.Tasks", "ContinuationTaskFromTask");
        }
        inline app::ContinuationTaskFromTask* create() {
            return il2cpp::create_object<app::ContinuationTaskFromTask>(get_class());
        }
    } // namespace ContinuationTaskFromTask
} // namespace app::classes::types

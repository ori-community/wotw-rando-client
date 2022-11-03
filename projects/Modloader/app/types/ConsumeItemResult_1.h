#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsumeItemResult_1 {
        inline app::ConsumeItemResult_1__Class** type_info = (app::ConsumeItemResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477AF00));
        inline app::ConsumeItemResult_1__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemResult_1__Class>(type_info, "PlayFab.ServerModels", "ConsumeItemResult");
        }
        inline app::ConsumeItemResult_1* create() {
            return il2cpp::create_object<app::ConsumeItemResult_1>(get_class());
        }
    } // namespace ConsumeItemResult_1
} // namespace app::classes::types

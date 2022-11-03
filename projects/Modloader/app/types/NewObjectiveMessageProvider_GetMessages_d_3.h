#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewObjectiveMessageProvider_GetMessages_d_3 {
        inline app::NewObjectiveMessageProvider_GetMessages_d_3__Class** type_info = (app::NewObjectiveMessageProvider_GetMessages_d_3__Class**)(modloader::win::memory::resolve_rva(0x0472A710));
        inline app::NewObjectiveMessageProvider_GetMessages_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::NewObjectiveMessageProvider_GetMessages_d_3__Class>(type_info, "", "NewObjectiveMessageProvider", "<GetMessages>d__3");
        }
        inline app::NewObjectiveMessageProvider_GetMessages_d_3* create() {
            return il2cpp::create_object<app::NewObjectiveMessageProvider_GetMessages_d_3>(get_class());
        }
    } // namespace NewObjectiveMessageProvider_GetMessages_d_3
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace List_1_IVirtualTimelineGameObject___Array {
        inline app::List_1_IVirtualTimelineGameObject___Array__Class** type_info = (app::List_1_IVirtualTimelineGameObject___Array__Class**)(modloader::win::memory::resolve_rva(0x04768C48));
        inline app::List_1_IVirtualTimelineGameObject___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_IVirtualTimelineGameObject___Array__Class>(type_info, "System.Collections.Generic", "List`1[IVirtualTimelineGameObject][]");
        }
        inline app::List_1_IVirtualTimelineGameObject___Array* create() {
            return il2cpp::create_object<app::List_1_IVirtualTimelineGameObject___Array>(get_class());
        }
    } // namespace List_1_IVirtualTimelineGameObject___Array
} // namespace app::classes::types

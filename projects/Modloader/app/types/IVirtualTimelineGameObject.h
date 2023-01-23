#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVirtualTimelineGameObject__Class.h>
#include <Modloader/app/structs/IVirtualTimelineGameObject__Array.h>
#include <Modloader/app/structs/IVirtualTimelineGameObject.h>

namespace app::classes::types {
    namespace IVirtualTimelineGameObject {
        inline app::IVirtualTimelineGameObject__Class** type_info = (app::IVirtualTimelineGameObject__Class**)(modloader::win::memory::resolve_rva(0x04791F08));
        inline app::IVirtualTimelineGameObject__Class* get_class() {
            return il2cpp::get_class<app::IVirtualTimelineGameObject__Class>(type_info, "", "IVirtualTimelineGameObject");
        }
        inline app::IVirtualTimelineGameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::IVirtualTimelineGameObject__Array>(get_class(), size);
        }
        inline app::IVirtualTimelineGameObject__Array* create_array(const std::vector<app::IVirtualTimelineGameObject*>& items) {
            return il2cpp::array_new<app::IVirtualTimelineGameObject__Array>(get_class(), items);
        }
    } // namespace IVirtualTimelineGameObject
} // namespace app::classes::types

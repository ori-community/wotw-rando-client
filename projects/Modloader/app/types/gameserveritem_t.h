#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/gameserveritem_t__Class.h>
#include <Modloader/app/structs/gameserveritem_t.h>

namespace app::classes::types {
    namespace gameserveritem_t {
        inline app::gameserveritem_t__Class** type_info = (app::gameserveritem_t__Class**)(modloader::win::memory::resolve_rva(0x04792EF8));
        inline app::gameserveritem_t__Class* get_class() {
            return il2cpp::get_class<app::gameserveritem_t__Class>(type_info, "Steamworks", "gameserveritem_t");
        }
        inline app::gameserveritem_t* create() {
            return il2cpp::create_object<app::gameserveritem_t>(get_class());
        }
    } // namespace gameserveritem_t
} // namespace app::classes::types

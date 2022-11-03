#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CGameID {
        inline app::CGameID__Class** type_info = (app::CGameID__Class**)(modloader::win::memory::resolve_rva(0x04710A08));
        inline app::CGameID__Class* get_class() {
            return il2cpp::get_class<app::CGameID__Class>(type_info, "Steamworks", "CGameID");
        }
        inline app::CGameID* create() {
            return il2cpp::create_object<app::CGameID>(get_class());
        }
        inline app::CGameID__Boxed* box(app::CGameID value) {
            return il2cpp::box_value<app::CGameID__Boxed>(get_class(), value);
        }
    } // namespace CGameID
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CGameID.h>
#include <Modloader/app/structs/CGameID__Boxed.h>
#include <Modloader/app/structs/CGameID__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CGameID {
        inline app::CGameID__Class** type_info() {
            static app::CGameID__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CGameID__Class**)(modloader::win::memory::resolve_rva(0x04710A08));
            }
            return cache;
        }
        inline app::CGameID__Class* get_class() {
            return il2cpp::get_class<app::CGameID__Class>(type_info(), "Steamworks", "CGameID");
        }
        inline app::CGameID* create() {
            return il2cpp::create_object<app::CGameID>(get_class());
        }
        inline app::CGameID__Boxed* box(app::CGameID value) {
            return il2cpp::box_value<app::CGameID__Boxed>(get_class(), value);
        }
    } // namespace CGameID
} // namespace app::classes::types

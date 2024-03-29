#pragma once
#include <Modloader/app/structs/GhostPlayer_c.h>
#include <Modloader/app/structs/GhostPlayer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostPlayer_c {
        inline app::GhostPlayer_c__Class** type_info() {
            static app::GhostPlayer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostPlayer_c__Class**)(modloader::win::memory::resolve_rva(0x0471FBE8));
            }
            return cache;
        }
        inline app::GhostPlayer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostPlayer_c__Class>(type_info(), "", "GhostPlayer", "<>c");
        }
        inline app::GhostPlayer_c* create() {
            return il2cpp::create_object<app::GhostPlayer_c>(get_class());
        }
    } // namespace GhostPlayer_c
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/GhostPlayer__Array.h>
#include <Modloader/app/structs/GhostPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostPlayer {
        inline app::GhostPlayer__Class** type_info() {
            static app::GhostPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostPlayer__Class**)(modloader::win::memory::resolve_rva(0x04737998));
            }
            return cache;
        }
        inline app::GhostPlayer__Class* get_class() {
            return il2cpp::get_class<app::GhostPlayer__Class>(type_info(), "", "GhostPlayer");
        }
        inline app::GhostPlayer* create() {
            return il2cpp::create_object<app::GhostPlayer>(get_class());
        }
        inline app::GhostPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::GhostPlayer__Array>(get_class(), size);
        }
        inline app::GhostPlayer__Array* create_array(const std::vector<app::GhostPlayer*>& items) {
            return il2cpp::array_new<app::GhostPlayer__Array>(get_class(), items);
        }
    } // namespace GhostPlayer
} // namespace app::classes::types

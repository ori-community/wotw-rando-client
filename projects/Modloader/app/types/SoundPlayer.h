#pragma once
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundPlayer__Array.h>
#include <Modloader/app/structs/SoundPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundPlayer {
        inline app::SoundPlayer__Class** type_info() {
            static app::SoundPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoundPlayer__Class**)(modloader::win::memory::resolve_rva(0x0477A6B0));
            }
            return cache;
        }
        inline app::SoundPlayer__Class* get_class() {
            return il2cpp::get_class<app::SoundPlayer__Class>(type_info(), "", "SoundPlayer");
        }
        inline app::SoundPlayer* create() {
            return il2cpp::create_object<app::SoundPlayer>(get_class());
        }
        inline app::SoundPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundPlayer__Array>(get_class(), size);
        }
        inline app::SoundPlayer__Array* create_array(const std::vector<app::SoundPlayer*>& items) {
            return il2cpp::array_new<app::SoundPlayer__Array>(get_class(), items);
        }
    } // namespace SoundPlayer
} // namespace app::classes::types

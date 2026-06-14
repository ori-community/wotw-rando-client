#pragma once
#include <Modloader/app/structs/SeinWallSlidePuppet.h>
#include <Modloader/app/structs/SeinWallSlidePuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWallSlidePuppet {
        inline app::SeinWallSlidePuppet__Class** type_info() {
            static app::SeinWallSlidePuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinWallSlidePuppet__Class**)(modloader::win::memory::resolve_rva(0x0473EFE8));
            }
            return cache;
        }
        inline app::SeinWallSlidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinWallSlidePuppet__Class>(type_info(), "", "SeinWallSlidePuppet");
        }
        inline app::SeinWallSlidePuppet* create() {
            return il2cpp::create_object<app::SeinWallSlidePuppet>(get_class());
        }
    } // namespace SeinWallSlidePuppet
} // namespace app::classes::types

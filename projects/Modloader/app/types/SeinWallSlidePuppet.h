#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinWallSlidePuppet__Class.h>
#include <Modloader/app/structs/SeinWallSlidePuppet.h>

namespace app::classes::types {
    namespace SeinWallSlidePuppet {
        inline app::SeinWallSlidePuppet__Class** type_info = (app::SeinWallSlidePuppet__Class**)(modloader::win::memory::resolve_rva(0x0473EFE8));
        inline app::SeinWallSlidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinWallSlidePuppet__Class>(type_info, "", "SeinWallSlidePuppet");
        }
        inline app::SeinWallSlidePuppet* create() {
            return il2cpp::create_object<app::SeinWallSlidePuppet>(get_class());
        }
    } // namespace SeinWallSlidePuppet
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SeinJumpHandler.h>
#include <Modloader/app/structs/SeinJumpHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinJumpHandler {
        inline app::SeinJumpHandler__Class** type_info() {
            static app::SeinJumpHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinJumpHandler__Class**)(modloader::win::memory::resolve_rva(0x04741D90));
            }
            return cache;
        }
        inline app::SeinJumpHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinJumpHandler__Class>(type_info(), "Game", "SeinJumpHandler");
        }
        inline app::SeinJumpHandler* create() {
            return il2cpp::create_object<app::SeinJumpHandler>(get_class());
        }
    } // namespace SeinJumpHandler
} // namespace app::classes::types

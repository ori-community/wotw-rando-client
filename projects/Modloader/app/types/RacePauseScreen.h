#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RacePauseScreen {
        inline app::RacePauseScreen__Class** type_info = (app::RacePauseScreen__Class**)(modloader::win::memory::resolve_rva(0x04735410));
        inline app::RacePauseScreen__Class* get_class() {
            return il2cpp::get_class<app::RacePauseScreen__Class>(type_info, "", "RacePauseScreen");
        }
        inline app::RacePauseScreen* create() {
            return il2cpp::create_object<app::RacePauseScreen>(get_class());
        }
    } // namespace RacePauseScreen
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeDifficultyScreen__Class.h>
#include <Modloader/app/structs/ChangeDifficultyScreen.h>

namespace app::classes::types {
    namespace ChangeDifficultyScreen {
        inline app::ChangeDifficultyScreen__Class** type_info = (app::ChangeDifficultyScreen__Class**)(modloader::win::memory::resolve_rva(0x047122B0));
        inline app::ChangeDifficultyScreen__Class* get_class() {
            return il2cpp::get_class<app::ChangeDifficultyScreen__Class>(type_info, "", "ChangeDifficultyScreen");
        }
        inline app::ChangeDifficultyScreen* create() {
            return il2cpp::create_object<app::ChangeDifficultyScreen>(get_class());
        }
    } // namespace ChangeDifficultyScreen
} // namespace app::classes::types

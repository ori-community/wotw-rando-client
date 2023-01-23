#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleScreenPressStartLogic__Class.h>
#include <Modloader/app/structs/TitleScreenPressStartLogic.h>

namespace app::classes::types {
    namespace TitleScreenPressStartLogic {
        inline app::TitleScreenPressStartLogic__Class** type_info = (app::TitleScreenPressStartLogic__Class**)(modloader::win::memory::resolve_rva(0x04725BC0));
        inline app::TitleScreenPressStartLogic__Class* get_class() {
            return il2cpp::get_class<app::TitleScreenPressStartLogic__Class>(type_info, "", "TitleScreenPressStartLogic");
        }
        inline app::TitleScreenPressStartLogic* create() {
            return il2cpp::create_object<app::TitleScreenPressStartLogic>(get_class());
        }
    } // namespace TitleScreenPressStartLogic
} // namespace app::classes::types

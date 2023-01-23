#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ISkipCutsceneAction__Class.h>
#include <Modloader/app/structs/ISkipCutsceneAction__Array.h>
#include <Modloader/app/structs/ISkipCutsceneAction.h>

namespace app::classes::types {
    namespace ISkipCutsceneAction {
        inline app::ISkipCutsceneAction__Class** type_info = (app::ISkipCutsceneAction__Class**)(modloader::win::memory::resolve_rva(0x047620B0));
        inline app::ISkipCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutsceneAction__Class>(type_info, "", "ISkipCutsceneAction");
        }
        inline app::ISkipCutsceneAction__Array* create_array(int size) {
            return il2cpp::array_new<app::ISkipCutsceneAction__Array>(get_class(), size);
        }
        inline app::ISkipCutsceneAction__Array* create_array(const std::vector<app::ISkipCutsceneAction*>& items) {
            return il2cpp::array_new<app::ISkipCutsceneAction__Array>(get_class(), items);
        }
    } // namespace ISkipCutsceneAction
} // namespace app::classes::types

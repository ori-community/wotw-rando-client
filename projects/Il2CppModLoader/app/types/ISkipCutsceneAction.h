#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISkipCutsceneAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISkipCutsceneAction__Class** type_info;
        inline app::ISkipCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutsceneAction__Class>(type_info, "", "ISkipCutsceneAction");
        }
        inline app::ISkipCutsceneAction* create() {
            return il2cpp::create_object<app::ISkipCutsceneAction>(get_class());
        }
        inline app::ISkipCutsceneAction__Array* create_array(int size) {
            return il2cpp::array_new<app::ISkipCutsceneAction__Array>(get_class(), size);
        }
    } // namespace ISkipCutsceneAction
} // namespace app::classes::types

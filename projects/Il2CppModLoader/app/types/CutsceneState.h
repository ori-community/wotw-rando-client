#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CutsceneState {
        namespace {
            app::CutsceneState__Class* type_info_ref = nullptr;
        }
        app::CutsceneState__Class** type_info = &type_info_ref;
        inline app::CutsceneState__Class* get_class() {
            return il2cpp::get_class<app::CutsceneState__Class>(type_info, "", "CutsceneState");
        }
        inline app::CutsceneState* create() {
            return il2cpp::create_object<app::CutsceneState>(get_class());
        }
        inline app::CutsceneState__Array* create_array(int size) {
            return il2cpp::array_new<app::CutsceneState__Array>(get_class(), size);
        }
        inline app::CutsceneState__Array* create_array(const std::vector<app::CutsceneState*>& items) {
            return il2cpp::array_new<app::CutsceneState__Array>(get_class(), items);
        }
    } // namespace CutsceneState
} // namespace app::classes::types

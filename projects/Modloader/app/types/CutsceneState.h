#pragma once
#include <Modloader/app/structs/CutsceneState.h>
#include <Modloader/app/structs/CutsceneState__Array.h>
#include <Modloader/app/structs/CutsceneState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneState {
        inline app::CutsceneState__Class** type_info() {
            static app::CutsceneState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneState__Class* get_class() {
            return il2cpp::get_class<app::CutsceneState__Class>(type_info(), "", "CutsceneState");
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

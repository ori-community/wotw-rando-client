#pragma once
#include <Modloader/app/structs/CutsceneState__Array.h>
#include <Modloader/app/structs/CutsceneState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneState__Array {
        inline app::CutsceneState__Array__Class** type_info() {
            static app::CutsceneState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneState__Array__Class* get_class() {
            return il2cpp::get_class<app::CutsceneState__Array__Class>(type_info(), "", "CutsceneState[]");
        }
        inline app::CutsceneState__Array* create() {
            return il2cpp::create_object<app::CutsceneState__Array>(get_class());
        }
    } // namespace CutsceneState__Array
} // namespace app::classes::types

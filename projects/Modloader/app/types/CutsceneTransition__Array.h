#pragma once
#include <Modloader/app/structs/CutsceneTransition__Array.h>
#include <Modloader/app/structs/CutsceneTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneTransition__Array {
        inline app::CutsceneTransition__Array__Class** type_info() {
            static app::CutsceneTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneTransition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::CutsceneTransition__Array__Class>(type_info(), "", "CutsceneTransition[]");
        }
        inline app::CutsceneTransition__Array* create() {
            return il2cpp::create_object<app::CutsceneTransition__Array>(get_class());
        }
    } // namespace CutsceneTransition__Array
} // namespace app::classes::types

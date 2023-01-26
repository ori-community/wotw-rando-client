#pragma once
#include <Modloader/app/structs/ISkipCutsceneAction__Array.h>
#include <Modloader/app/structs/ISkipCutsceneAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISkipCutsceneAction__Array {
        inline app::ISkipCutsceneAction__Array__Class** type_info() {
            static app::ISkipCutsceneAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISkipCutsceneAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISkipCutsceneAction__Array__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutsceneAction__Array__Class>(type_info(), "", "ISkipCutsceneAction[]");
        }
        inline app::ISkipCutsceneAction__Array* create() {
            return il2cpp::create_object<app::ISkipCutsceneAction__Array>(get_class());
        }
    } // namespace ISkipCutsceneAction__Array
} // namespace app::classes::types

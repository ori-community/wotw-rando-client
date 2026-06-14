#pragma once
#include <Modloader/app/structs/ISkipCutscene__Array.h>
#include <Modloader/app/structs/ISkipCutscene__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISkipCutscene__Array {
        inline app::ISkipCutscene__Array__Class** type_info() {
            static app::ISkipCutscene__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISkipCutscene__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISkipCutscene__Array__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutscene__Array__Class>(type_info(), "", "ISkipCutscene[]");
        }
        inline app::ISkipCutscene__Array* create() {
            return il2cpp::create_object<app::ISkipCutscene__Array>(get_class());
        }
    } // namespace ISkipCutscene__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/StartLoopEndEffect.h>
#include <Modloader/app/structs/StartLoopEndEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartLoopEndEffect {
        inline app::StartLoopEndEffect__Class** type_info() {
            static app::StartLoopEndEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StartLoopEndEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StartLoopEndEffect__Class* get_class() {
            return il2cpp::get_class<app::StartLoopEndEffect__Class>(type_info(), "", "StartLoopEndEffect");
        }
        inline app::StartLoopEndEffect* create() {
            return il2cpp::create_object<app::StartLoopEndEffect>(get_class());
        }
    } // namespace StartLoopEndEffect
} // namespace app::classes::types

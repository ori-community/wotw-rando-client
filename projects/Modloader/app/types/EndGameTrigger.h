#pragma once
#include <Modloader/app/structs/EndGameTrigger.h>
#include <Modloader/app/structs/EndGameTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EndGameTrigger {
        inline app::EndGameTrigger__Class** type_info() {
            static app::EndGameTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EndGameTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EndGameTrigger__Class* get_class() {
            return il2cpp::get_class<app::EndGameTrigger__Class>(type_info(), "", "EndGameTrigger");
        }
        inline app::EndGameTrigger* create() {
            return il2cpp::create_object<app::EndGameTrigger>(get_class());
        }
    } // namespace EndGameTrigger
} // namespace app::classes::types

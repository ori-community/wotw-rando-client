#pragma once
#include <Modloader/app/structs/ITrigger.h>
#include <Modloader/app/structs/ITrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITrigger {
        inline app::ITrigger__Class** type_info() {
            static app::ITrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITrigger__Class* get_class() {
            return il2cpp::get_class<app::ITrigger__Class>(type_info(), "Moon.InteractionGraph", "ITrigger");
        }
    } // namespace ITrigger
} // namespace app::classes::types

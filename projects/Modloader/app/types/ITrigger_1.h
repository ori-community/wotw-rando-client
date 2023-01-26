#pragma once
#include <Modloader/app/structs/ITrigger_1.h>
#include <Modloader/app/structs/ITrigger_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITrigger_1 {
        inline app::ITrigger_1__Class** type_info() {
            static app::ITrigger_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITrigger_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITrigger_1__Class* get_class() {
            return il2cpp::get_class<app::ITrigger_1__Class>(type_info(), "fsm", "ITrigger");
        }
    } // namespace ITrigger_1
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SeinEnterExitTrigger.h>
#include <Modloader/app/structs/SeinEnterExitTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnterExitTrigger {
        inline app::SeinEnterExitTrigger__Class** type_info() {
            static app::SeinEnterExitTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnterExitTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnterExitTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinEnterExitTrigger__Class>(type_info(), "", "SeinEnterExitTrigger");
        }
        inline app::SeinEnterExitTrigger* create() {
            return il2cpp::create_object<app::SeinEnterExitTrigger>(get_class());
        }
    } // namespace SeinEnterExitTrigger
} // namespace app::classes::types

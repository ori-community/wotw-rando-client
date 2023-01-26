#pragma once
#include <Modloader/app/structs/FABRIK.h>
#include <Modloader/app/structs/FABRIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FABRIK {
        inline app::FABRIK__Class** type_info() {
            static app::FABRIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FABRIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FABRIK__Class* get_class() {
            return il2cpp::get_class<app::FABRIK__Class>(type_info(), "RootMotion.FinalIK", "FABRIK");
        }
        inline app::FABRIK* create() {
            return il2cpp::create_object<app::FABRIK>(get_class());
        }
    } // namespace FABRIK
} // namespace app::classes::types

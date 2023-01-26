#pragma once
#include <Modloader/app/structs/HoldingHands.h>
#include <Modloader/app/structs/HoldingHands__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoldingHands {
        inline app::HoldingHands__Class** type_info() {
            static app::HoldingHands__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HoldingHands__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HoldingHands__Class* get_class() {
            return il2cpp::get_class<app::HoldingHands__Class>(type_info(), "RootMotion.Demos", "HoldingHands");
        }
        inline app::HoldingHands* create() {
            return il2cpp::create_object<app::HoldingHands>(get_class());
        }
    } // namespace HoldingHands
} // namespace app::classes::types

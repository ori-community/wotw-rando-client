#pragma once
#include <Modloader/app/structs/InteractionBidingButton__Enum.h>
#include <Modloader/app/structs/InteractionBidingButton__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionBidingButton__Enum {
        inline app::InteractionBidingButton__Enum__Class** type_info() {
            static app::InteractionBidingButton__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionBidingButton__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionBidingButton__Enum__Class* get_class() {
            return il2cpp::get_class<app::InteractionBidingButton__Enum__Class>(type_info(), "Moon.InteractionGraph", "InteractionBidingButton");
        }
        inline app::InteractionBidingButton__Enum* create() {
            return il2cpp::create_object<app::InteractionBidingButton__Enum>(get_class());
        }
    } // namespace InteractionBidingButton__Enum
} // namespace app::classes::types

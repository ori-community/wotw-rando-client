#pragma once
#include <Modloader/app/structs/SpiderBatReactionFallingBehaviour.h>
#include <Modloader/app/structs/SpiderBatReactionFallingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatReactionFallingBehaviour {
        inline app::SpiderBatReactionFallingBehaviour__Class** type_info() {
            static app::SpiderBatReactionFallingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatReactionFallingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatReactionFallingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatReactionFallingBehaviour__Class>(type_info(), "", "SpiderBatReactionFallingBehaviour");
        }
        inline app::SpiderBatReactionFallingBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatReactionFallingBehaviour>(get_class());
        }
    } // namespace SpiderBatReactionFallingBehaviour
} // namespace app::classes::types

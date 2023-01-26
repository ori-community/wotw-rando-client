#pragma once
#include <Modloader/app/structs/SpiderInteractionBehaviour.h>
#include <Modloader/app/structs/SpiderInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderInteractionBehaviour {
        inline app::SpiderInteractionBehaviour__Class** type_info() {
            static app::SpiderInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderInteractionBehaviour__Class>(type_info(), "", "SpiderInteractionBehaviour");
        }
        inline app::SpiderInteractionBehaviour* create() {
            return il2cpp::create_object<app::SpiderInteractionBehaviour>(get_class());
        }
    } // namespace SpiderInteractionBehaviour
} // namespace app::classes::types

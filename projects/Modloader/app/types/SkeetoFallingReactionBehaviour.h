#pragma once
#include <Modloader/app/structs/SkeetoFallingReactionBehaviour.h>
#include <Modloader/app/structs/SkeetoFallingReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoFallingReactionBehaviour {
        inline app::SkeetoFallingReactionBehaviour__Class** type_info() {
            static app::SkeetoFallingReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoFallingReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoFallingReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoFallingReactionBehaviour__Class>(type_info(), "", "SkeetoFallingReactionBehaviour");
        }
        inline app::SkeetoFallingReactionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoFallingReactionBehaviour>(get_class());
        }
    } // namespace SkeetoFallingReactionBehaviour
} // namespace app::classes::types

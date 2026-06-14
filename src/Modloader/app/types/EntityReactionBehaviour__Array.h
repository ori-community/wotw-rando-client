#pragma once
#include <Modloader/app/structs/EntityReactionBehaviour__Array.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityReactionBehaviour__Array {
        inline app::EntityReactionBehaviour__Array__Class** type_info() {
            static app::EntityReactionBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityReactionBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x04742E70));
            }
            return cache;
        }
        inline app::EntityReactionBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityReactionBehaviour__Array__Class>(type_info(), "", "EntityReactionBehaviour[]");
        }
        inline app::EntityReactionBehaviour__Array* create() {
            return il2cpp::create_object<app::EntityReactionBehaviour__Array>(get_class());
        }
    } // namespace EntityReactionBehaviour__Array
} // namespace app::classes::types

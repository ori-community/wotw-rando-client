#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityReactionBehaviour__Array {
        inline app::EntityReactionBehaviour__Array__Class** type_info = (app::EntityReactionBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x04742E70));
        inline app::EntityReactionBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityReactionBehaviour__Array__Class>(type_info, "", "EntityReactionBehaviour[]");
        }
        inline app::EntityReactionBehaviour__Array* create() {
            return il2cpp::create_object<app::EntityReactionBehaviour__Array>(get_class());
        }
    } // namespace EntityReactionBehaviour__Array
} // namespace app::classes::types

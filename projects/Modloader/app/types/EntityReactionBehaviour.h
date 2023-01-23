#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Class.h>
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Array.h>

namespace app::classes::types {
    namespace EntityReactionBehaviour {
        inline app::EntityReactionBehaviour__Class** type_info = (app::EntityReactionBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0477EA68));
        inline app::EntityReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::EntityReactionBehaviour__Class>(type_info, "", "EntityReactionBehaviour");
        }
        inline app::EntityReactionBehaviour* create() {
            return il2cpp::create_object<app::EntityReactionBehaviour>(get_class());
        }
        inline app::EntityReactionBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityReactionBehaviour__Array>(get_class(), size);
        }
        inline app::EntityReactionBehaviour__Array* create_array(const std::vector<app::EntityReactionBehaviour*>& items) {
            return il2cpp::array_new<app::EntityReactionBehaviour__Array>(get_class(), items);
        }
    } // namespace EntityReactionBehaviour
} // namespace app::classes::types

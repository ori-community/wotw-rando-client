#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityTask_c {
        inline app::EntityTask_c__Class** type_info = (app::EntityTask_c__Class**)(modloader::win::memory::resolve_rva(0x0472A910));
        inline app::EntityTask_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityTask_c__Class>(type_info, "Moon.BehaviourSystem", "EntityTask", "<>c");
        }
        inline app::EntityTask_c* create() {
            return il2cpp::create_object<app::EntityTask_c>(get_class());
        }
    } // namespace EntityTask_c
} // namespace app::classes::types

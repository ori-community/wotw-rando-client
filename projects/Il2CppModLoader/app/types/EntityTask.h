#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityTask {
        inline app::EntityTask__Class** type_info = (app::EntityTask__Class**)(modloader::win::memory::resolve_rva(0x04764688));
        inline app::EntityTask__Class* get_class() {
            return il2cpp::get_class<app::EntityTask__Class>(type_info, "Moon.BehaviourSystem", "EntityTask");
        }
        inline app::EntityTask* create() {
            return il2cpp::create_object<app::EntityTask>(get_class());
        }
        inline app::EntityTask__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityTask__Array>(get_class(), size);
        }
        inline app::EntityTask__Array* create_array(const std::vector<app::EntityTask*>& items) {
            return il2cpp::array_new<app::EntityTask__Array>(get_class(), items);
        }
    } // namespace EntityTask
} // namespace app::classes::types

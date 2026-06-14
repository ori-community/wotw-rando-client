#pragma once
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/EntityTask__Array.h>
#include <Modloader/app/structs/EntityTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityTask {
        inline app::EntityTask__Class** type_info() {
            static app::EntityTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityTask__Class**)(modloader::win::memory::resolve_rva(0x04764688));
            }
            return cache;
        }
        inline app::EntityTask__Class* get_class() {
            return il2cpp::get_class<app::EntityTask__Class>(type_info(), "Moon.BehaviourSystem", "EntityTask");
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

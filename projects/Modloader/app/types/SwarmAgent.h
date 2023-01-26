#pragma once
#include <Modloader/app/structs/SwarmAgent.h>
#include <Modloader/app/structs/SwarmAgent__Array.h>
#include <Modloader/app/structs/SwarmAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmAgent {
        inline app::SwarmAgent__Class** type_info() {
            static app::SwarmAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmAgent__Class* get_class() {
            return il2cpp::get_class<app::SwarmAgent__Class>(type_info(), "", "SwarmAgent");
        }
        inline app::SwarmAgent* create() {
            return il2cpp::create_object<app::SwarmAgent>(get_class());
        }
        inline app::SwarmAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::SwarmAgent__Array>(get_class(), size);
        }
        inline app::SwarmAgent__Array* create_array(const std::vector<app::SwarmAgent*>& items) {
            return il2cpp::array_new<app::SwarmAgent__Array>(get_class(), items);
        }
    } // namespace SwarmAgent
} // namespace app::classes::types

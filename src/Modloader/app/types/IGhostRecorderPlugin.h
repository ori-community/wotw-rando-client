#pragma once
#include <Modloader/app/structs/IGhostRecorderPlugin.h>
#include <Modloader/app/structs/IGhostRecorderPlugin__Array.h>
#include <Modloader/app/structs/IGhostRecorderPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGhostRecorderPlugin {
        inline app::IGhostRecorderPlugin__Class** type_info() {
            static app::IGhostRecorderPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IGhostRecorderPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IGhostRecorderPlugin__Class* get_class() {
            return il2cpp::get_class<app::IGhostRecorderPlugin__Class>(type_info(), "", "IGhostRecorderPlugin");
        }
        inline app::IGhostRecorderPlugin* create() {
            return il2cpp::create_object<app::IGhostRecorderPlugin>(get_class());
        }
        inline app::IGhostRecorderPlugin__Array* create_array(int size) {
            return il2cpp::array_new<app::IGhostRecorderPlugin__Array>(get_class(), size);
        }
        inline app::IGhostRecorderPlugin__Array* create_array(const std::vector<app::IGhostRecorderPlugin*>& items) {
            return il2cpp::array_new<app::IGhostRecorderPlugin__Array>(get_class(), items);
        }
    } // namespace IGhostRecorderPlugin
} // namespace app::classes::types

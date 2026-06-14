#pragma once
#include <Modloader/app/structs/VelocityChangeEntry.h>
#include <Modloader/app/structs/VelocityChangeEntry__Array.h>
#include <Modloader/app/structs/VelocityChangeEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VelocityChangeEntry {
        inline app::VelocityChangeEntry__Class** type_info() {
            static app::VelocityChangeEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VelocityChangeEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VelocityChangeEntry__Class* get_class() {
            return il2cpp::get_class<app::VelocityChangeEntry__Class>(type_info(), "PhysicsDebugTools", "VelocityChangeEntry");
        }
        inline app::VelocityChangeEntry* create() {
            return il2cpp::create_object<app::VelocityChangeEntry>(get_class());
        }
        inline app::VelocityChangeEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::VelocityChangeEntry__Array>(get_class(), size);
        }
        inline app::VelocityChangeEntry__Array* create_array(const std::vector<app::VelocityChangeEntry*>& items) {
            return il2cpp::array_new<app::VelocityChangeEntry__Array>(get_class(), items);
        }
    } // namespace VelocityChangeEntry
} // namespace app::classes::types

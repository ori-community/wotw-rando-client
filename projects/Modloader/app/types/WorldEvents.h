#pragma once
#include <Modloader/app/structs/WorldEvents.h>
#include <Modloader/app/structs/WorldEvents__Array.h>
#include <Modloader/app/structs/WorldEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEvents {
        inline app::WorldEvents__Class** type_info() {
            static app::WorldEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldEvents__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldEvents__Class* get_class() {
            return il2cpp::get_class<app::WorldEvents__Class>(type_info(), "", "WorldEvents");
        }
        inline app::WorldEvents* create() {
            return il2cpp::create_object<app::WorldEvents>(get_class());
        }
        inline app::WorldEvents__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldEvents__Array>(get_class(), size);
        }
        inline app::WorldEvents__Array* create_array(const std::vector<app::WorldEvents*>& items) {
            return il2cpp::array_new<app::WorldEvents__Array>(get_class(), items);
        }
    } // namespace WorldEvents
} // namespace app::classes::types

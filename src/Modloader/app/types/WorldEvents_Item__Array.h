#pragma once
#include <Modloader/app/structs/WorldEvents_Item__Array.h>
#include <Modloader/app/structs/WorldEvents_Item__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEvents_Item__Array {
        inline app::WorldEvents_Item__Array__Class** type_info() {
            static app::WorldEvents_Item__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldEvents_Item__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldEvents_Item__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEvents_Item__Array__Class>(type_info(), "", "WorldEvents+Item[]");
        }
        inline app::WorldEvents_Item__Array* create() {
            return il2cpp::create_object<app::WorldEvents_Item__Array>(get_class());
        }
    } // namespace WorldEvents_Item__Array
} // namespace app::classes::types

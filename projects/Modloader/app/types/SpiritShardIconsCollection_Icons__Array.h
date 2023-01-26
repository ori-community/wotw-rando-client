#pragma once
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIconsCollection_Icons__Array {
        inline app::SpiritShardIconsCollection_Icons__Array__Class** type_info() {
            static app::SpiritShardIconsCollection_Icons__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardIconsCollection_Icons__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardIconsCollection_Icons__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIconsCollection_Icons__Array__Class>(type_info(), "", "SpiritShardIconsCollection+Icons[]");
        }
        inline app::SpiritShardIconsCollection_Icons__Array* create() {
            return il2cpp::create_object<app::SpiritShardIconsCollection_Icons__Array>(get_class());
        }
    } // namespace SpiritShardIconsCollection_Icons__Array
} // namespace app::classes::types

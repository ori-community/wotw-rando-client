#pragma once
#include <Modloader/app/structs/SpiritShardDescription__Array.h>
#include <Modloader/app/structs/SpiritShardDescription__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardDescription__Array {
        inline app::SpiritShardDescription__Array__Class** type_info() {
            static app::SpiritShardDescription__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardDescription__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardDescription__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescription__Array__Class>(type_info(), "", "SpiritShardDescription[]");
        }
        inline app::SpiritShardDescription__Array* create() {
            return il2cpp::create_object<app::SpiritShardDescription__Array>(get_class());
        }
    } // namespace SpiritShardDescription__Array
} // namespace app::classes::types

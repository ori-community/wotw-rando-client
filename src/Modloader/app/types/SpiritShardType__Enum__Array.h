#pragma once
#include <Modloader/app/structs/SpiritShardType__Enum__Array.h>
#include <Modloader/app/structs/SpiritShardType__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardType__Enum__Array {
        inline app::SpiritShardType__Enum__Array__Class** type_info() {
            static app::SpiritShardType__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04795B30));
            }
            return cache;
        }
        inline app::SpiritShardType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardType__Enum__Array__Class>(type_info(), "", "SpiritShardType[]");
        }
        inline app::SpiritShardType__Enum__Array* create() {
            return il2cpp::create_object<app::SpiritShardType__Enum__Array>(get_class());
        }
    } // namespace SpiritShardType__Enum__Array
} // namespace app::classes::types

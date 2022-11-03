#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardType__Enum__Array {
        inline app::SpiritShardType__Enum__Array__Class** type_info = (app::SpiritShardType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04795B30));
        inline app::SpiritShardType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardType__Enum__Array__Class>(type_info, "", "SpiritShardType[]");
        }
        inline app::SpiritShardType__Enum__Array* create() {
            return il2cpp::create_object<app::SpiritShardType__Enum__Array>(get_class());
        }
    } // namespace SpiritShardType__Enum__Array
} // namespace app::classes::types

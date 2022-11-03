#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardType__Enum {
        inline app::SpiritShardType__Enum__Class** type_info = (app::SpiritShardType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04732700));
        inline app::SpiritShardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardType__Enum__Class>(type_info, "", "SpiritShardType");
        }
        inline app::SpiritShardType__Enum* create() {
            return il2cpp::create_object<app::SpiritShardType__Enum>(get_class());
        }
        inline app::SpiritShardType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardType__Enum__Array>(get_class(), size);
        }
        inline app::SpiritShardType__Enum__Array* create_array(const std::vector<app::SpiritShardType__Enum*>& items) {
            return il2cpp::array_new<app::SpiritShardType__Enum__Array>(get_class(), items);
        }
    } // namespace SpiritShardType__Enum
} // namespace app::classes::types

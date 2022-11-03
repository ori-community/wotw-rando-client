#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardDescription {
        inline app::SpiritShardDescription__Class** type_info = (app::SpiritShardDescription__Class**)(modloader::win::memory::resolve_rva(0x04728998));
        inline app::SpiritShardDescription__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescription__Class>(type_info, "", "SpiritShardDescription");
        }
        inline app::SpiritShardDescription* create() {
            return il2cpp::create_object<app::SpiritShardDescription>(get_class());
        }
        inline app::SpiritShardDescription__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardDescription__Array>(get_class(), size);
        }
        inline app::SpiritShardDescription__Array* create_array(const std::vector<app::SpiritShardDescription*>& items) {
            return il2cpp::array_new<app::SpiritShardDescription__Array>(get_class(), items);
        }
    } // namespace SpiritShardDescription
} // namespace app::classes::types

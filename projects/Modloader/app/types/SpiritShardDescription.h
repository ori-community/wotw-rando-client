#pragma once
#include <Modloader/app/structs/SpiritShardDescription.h>
#include <Modloader/app/structs/SpiritShardDescription__Array.h>
#include <Modloader/app/structs/SpiritShardDescription__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardDescription {
        inline app::SpiritShardDescription__Class** type_info() {
            static app::SpiritShardDescription__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardDescription__Class**)(modloader::win::memory::resolve_rva(0x04728998));
            }
            return cache;
        }
        inline app::SpiritShardDescription__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescription__Class>(type_info(), "", "SpiritShardDescription");
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

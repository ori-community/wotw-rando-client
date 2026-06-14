#pragma once
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Array.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Boxed.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIconsCollection_Icons {
        inline app::SpiritShardIconsCollection_Icons__Class** type_info() {
            static app::SpiritShardIconsCollection_Icons__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardIconsCollection_Icons__Class**)(modloader::win::memory::resolve_rva(0x047638F0));
            }
            return cache;
        }
        inline app::SpiritShardIconsCollection_Icons__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardIconsCollection_Icons__Class>(type_info(), "", "SpiritShardIconsCollection", "Icons");
        }
        inline app::SpiritShardIconsCollection_Icons* create() {
            return il2cpp::create_object<app::SpiritShardIconsCollection_Icons>(get_class());
        }
        inline app::SpiritShardIconsCollection_Icons__Boxed* box(app::SpiritShardIconsCollection_Icons value) {
            return il2cpp::box_value<app::SpiritShardIconsCollection_Icons__Boxed>(get_class(), value);
        }
        inline app::SpiritShardIconsCollection_Icons__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardIconsCollection_Icons__Array>(get_class(), size);
        }
        inline app::SpiritShardIconsCollection_Icons__Array* create_array(const std::vector<app::SpiritShardIconsCollection_Icons>& items) {
            return il2cpp::array_new<app::SpiritShardIconsCollection_Icons__Array>(get_class(), items);
        }
    } // namespace SpiritShardIconsCollection_Icons
} // namespace app::classes::types

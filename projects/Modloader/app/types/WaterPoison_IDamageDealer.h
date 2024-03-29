#pragma once
#include <Modloader/app/structs/WaterPoison_IDamageDealer.h>
#include <Modloader/app/structs/WaterPoison_IDamageDealer__Array.h>
#include <Modloader/app/structs/WaterPoison_IDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoison_IDamageDealer {
        inline app::WaterPoison_IDamageDealer__Class** type_info() {
            static app::WaterPoison_IDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterPoison_IDamageDealer__Class**)(modloader::win::memory::resolve_rva(0x047952C8));
            }
            return cache;
        }
        inline app::WaterPoison_IDamageDealer__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterPoison_IDamageDealer__Class>(type_info(), "", "WaterPoison", "IDamageDealer");
        }
        inline app::WaterPoison_IDamageDealer__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterPoison_IDamageDealer__Array>(get_class(), size);
        }
        inline app::WaterPoison_IDamageDealer__Array* create_array(const std::vector<app::WaterPoison_IDamageDealer*>& items) {
            return il2cpp::array_new<app::WaterPoison_IDamageDealer__Array>(get_class(), items);
        }
    } // namespace WaterPoison_IDamageDealer
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/UberWaterTop.h>
#include <Modloader/app/structs/UberWaterTop__Array.h>
#include <Modloader/app/structs/UberWaterTop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterTop {
        inline app::UberWaterTop__Class** type_info() {
            static app::UberWaterTop__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterTop__Class**)(modloader::win::memory::resolve_rva(0x0477AEA8));
            }
            return cache;
        }
        inline app::UberWaterTop__Class* get_class() {
            return il2cpp::get_class<app::UberWaterTop__Class>(type_info(), "", "UberWaterTop");
        }
        inline app::UberWaterTop* create() {
            return il2cpp::create_object<app::UberWaterTop>(get_class());
        }
        inline app::UberWaterTop__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterTop__Array>(get_class(), size);
        }
        inline app::UberWaterTop__Array* create_array(const std::vector<app::UberWaterTop*>& items) {
            return il2cpp::array_new<app::UberWaterTop__Array>(get_class(), items);
        }
    } // namespace UberWaterTop
} // namespace app::classes::types

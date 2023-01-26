#pragma once
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone__Array.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroGameplayHideZone {
        inline app::MistyWoodsKuroGameplayHideZone__Class** type_info() {
            static app::MistyWoodsKuroGameplayHideZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MistyWoodsKuroGameplayHideZone__Class**)(modloader::win::memory::resolve_rva(0x047835C8));
            }
            return cache;
        }
        inline app::MistyWoodsKuroGameplayHideZone__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroGameplayHideZone__Class>(type_info(), "", "MistyWoodsKuroGameplayHideZone");
        }
        inline app::MistyWoodsKuroGameplayHideZone* create() {
            return il2cpp::create_object<app::MistyWoodsKuroGameplayHideZone>(get_class());
        }
        inline app::MistyWoodsKuroGameplayHideZone__Array* create_array(int size) {
            return il2cpp::array_new<app::MistyWoodsKuroGameplayHideZone__Array>(get_class(), size);
        }
        inline app::MistyWoodsKuroGameplayHideZone__Array* create_array(const std::vector<app::MistyWoodsKuroGameplayHideZone*>& items) {
            return il2cpp::array_new<app::MistyWoodsKuroGameplayHideZone__Array>(get_class(), items);
        }
    } // namespace MistyWoodsKuroGameplayHideZone
} // namespace app::classes::types

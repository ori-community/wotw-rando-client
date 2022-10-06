#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroGameplayHideZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MistyWoodsKuroGameplayHideZone__Class** type_info;
        inline app::MistyWoodsKuroGameplayHideZone__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroGameplayHideZone__Class>(type_info, "", "MistyWoodsKuroGameplayHideZone");
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

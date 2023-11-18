#pragma once
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0 {
        inline app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class** type_info() {
            static app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04766260));
            }
            return cache;
        }
        inline app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0__Class>(type_info(), "", "MistyWoodsKuroGameplayHideZone", "<>c__DisplayClass3_0");
        }
        inline app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0>(get_class());
        }
    } // namespace MistyWoodsKuroGameplayHideZone_c_DisplayClass3_0
} // namespace app::classes::types

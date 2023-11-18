#pragma once
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone__Array.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayHideZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroGameplayHideZone__Array {
        inline app::MistyWoodsKuroGameplayHideZone__Array__Class** type_info() {
            static app::MistyWoodsKuroGameplayHideZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistyWoodsKuroGameplayHideZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistyWoodsKuroGameplayHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroGameplayHideZone__Array__Class>(type_info(), "", "MistyWoodsKuroGameplayHideZone[]");
        }
        inline app::MistyWoodsKuroGameplayHideZone__Array* create() {
            return il2cpp::create_object<app::MistyWoodsKuroGameplayHideZone__Array>(get_class());
        }
    } // namespace MistyWoodsKuroGameplayHideZone__Array
} // namespace app::classes::types

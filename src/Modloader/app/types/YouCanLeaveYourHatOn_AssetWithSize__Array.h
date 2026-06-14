#pragma once
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize__Array.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_AssetWithSize__Array {
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class** type_info() {
            static app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class* get_class() {
            return il2cpp::get_class<app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class>(type_info(), "", "YouCanLeaveYourHatOn+AssetWithSize[]");
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_AssetWithSize__Array>(get_class());
        }
    } // namespace YouCanLeaveYourHatOn_AssetWithSize__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize__Array.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_AssetWithSize {
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Class** type_info() {
            static app::YouCanLeaveYourHatOn_AssetWithSize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::YouCanLeaveYourHatOn_AssetWithSize__Class**)(modloader::win::memory::resolve_rva(0x0476DB88));
            }
            return cache;
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Class* get_class() {
            return il2cpp::get_nested_class<app::YouCanLeaveYourHatOn_AssetWithSize__Class>(type_info(), "", "YouCanLeaveYourHatOn", "AssetWithSize");
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_AssetWithSize>(get_class());
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array* create_array(int size) {
            return il2cpp::array_new<app::YouCanLeaveYourHatOn_AssetWithSize__Array>(get_class(), size);
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array* create_array(const std::vector<app::YouCanLeaveYourHatOn_AssetWithSize*>& items) {
            return il2cpp::array_new<app::YouCanLeaveYourHatOn_AssetWithSize__Array>(get_class(), items);
        }
    } // namespace YouCanLeaveYourHatOn_AssetWithSize
} // namespace app::classes::types

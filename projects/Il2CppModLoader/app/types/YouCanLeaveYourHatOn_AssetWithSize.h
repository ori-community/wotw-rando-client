#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_AssetWithSize {
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Class** type_info = (app::YouCanLeaveYourHatOn_AssetWithSize__Class**)(modloader::win::memory::resolve_rva(0x0476DB88));
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Class* get_class() {
            return il2cpp::get_nested_class<app::YouCanLeaveYourHatOn_AssetWithSize__Class>(type_info, "", "YouCanLeaveYourHatOn", "AssetWithSize");
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

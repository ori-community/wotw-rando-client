#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_AssetWithSize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::YouCanLeaveYourHatOn_AssetWithSize__Class** type_info;
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Class* get_class() {
            return il2cpp::get_nested_class<app::YouCanLeaveYourHatOn_AssetWithSize__Class>(type_info, "", "YouCanLeaveYourHatOn", "AssetWithSize");
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_AssetWithSize>(get_class());
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array* create_array(int size) {
            return il2cpp::array_new<app::YouCanLeaveYourHatOn_AssetWithSize__Array>(get_class(), size);
        }
    } // namespace YouCanLeaveYourHatOn_AssetWithSize
} // namespace app::classes::types

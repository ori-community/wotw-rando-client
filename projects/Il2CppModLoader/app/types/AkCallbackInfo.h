#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackInfo {
        namespace {
            app::AkCallbackInfo__Class* type_info_ref = nullptr;
        }
        app::AkCallbackInfo__Class** type_info = &type_info_ref;
        inline app::AkCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackInfo__Class>(type_info, "", "AkCallbackInfo");
        }
        inline app::AkCallbackInfo* create() {
            return il2cpp::create_object<app::AkCallbackInfo>(get_class());
        }
    } // namespace AkCallbackInfo
} // namespace app::classes::types

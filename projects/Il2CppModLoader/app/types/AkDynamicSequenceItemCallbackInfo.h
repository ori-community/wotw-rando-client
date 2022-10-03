#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkDynamicSequenceItemCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkDynamicSequenceItemCallbackInfo__Class** type_info;
        inline app::AkDynamicSequenceItemCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkDynamicSequenceItemCallbackInfo__Class>(type_info, "", "AkDynamicSequenceItemCallbackInfo");
        }
        inline app::AkDynamicSequenceItemCallbackInfo* create() {
            return il2cpp::create_object<app::AkDynamicSequenceItemCallbackInfo>(get_class());
        }
    } // namespace AkDynamicSequenceItemCallbackInfo
} // namespace app::classes::types

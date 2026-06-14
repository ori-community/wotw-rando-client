#pragma once
#include <Modloader/app/structs/AkCallbackInfo.h>
#include <Modloader/app/structs/AkCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackInfo {
        inline app::AkCallbackInfo__Class** type_info() {
            static app::AkCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCallbackInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackInfo__Class>(type_info(), "", "AkCallbackInfo");
        }
        inline app::AkCallbackInfo* create() {
            return il2cpp::create_object<app::AkCallbackInfo>(get_class());
        }
    } // namespace AkCallbackInfo
} // namespace app::classes::types

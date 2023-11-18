#pragma once
#include <Modloader/app/structs/AkCallbackManager_BGMCallback.h>
#include <Modloader/app/structs/AkCallbackManager_BGMCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_BGMCallback {
        inline app::AkCallbackManager_BGMCallback__Class** type_info() {
            static app::AkCallbackManager_BGMCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCallbackManager_BGMCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCallbackManager_BGMCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_BGMCallback__Class>(type_info(), "", "AkCallbackManager", "BGMCallback");
        }
        inline app::AkCallbackManager_BGMCallback* create() {
            return il2cpp::create_object<app::AkCallbackManager_BGMCallback>(get_class());
        }
    } // namespace AkCallbackManager_BGMCallback
} // namespace app::classes::types

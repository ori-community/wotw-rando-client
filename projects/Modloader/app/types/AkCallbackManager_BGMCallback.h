#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackManager_BGMCallback {
        namespace {
            inline app::AkCallbackManager_BGMCallback__Class* type_info_ref = nullptr;
        }
        inline app::AkCallbackManager_BGMCallback__Class** type_info = &type_info_ref;
        inline app::AkCallbackManager_BGMCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_BGMCallback__Class>(type_info, "", "AkCallbackManager", "BGMCallback");
        }
        inline app::AkCallbackManager_BGMCallback* create() {
            return il2cpp::create_object<app::AkCallbackManager_BGMCallback>(get_class());
        }
    } // namespace AkCallbackManager_BGMCallback
} // namespace app::classes::types

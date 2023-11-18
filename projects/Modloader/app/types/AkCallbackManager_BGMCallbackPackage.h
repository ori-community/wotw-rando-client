#pragma once
#include <Modloader/app/structs/AkCallbackManager_BGMCallbackPackage.h>
#include <Modloader/app/structs/AkCallbackManager_BGMCallbackPackage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_BGMCallbackPackage {
        inline app::AkCallbackManager_BGMCallbackPackage__Class** type_info() {
            static app::AkCallbackManager_BGMCallbackPackage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkCallbackManager_BGMCallbackPackage__Class**)(modloader::win::memory::resolve_rva(0x0474A0A8));
            }
            return cache;
        }
        inline app::AkCallbackManager_BGMCallbackPackage__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_BGMCallbackPackage__Class>(type_info(), "", "AkCallbackManager", "BGMCallbackPackage");
        }
        inline app::AkCallbackManager_BGMCallbackPackage* create() {
            return il2cpp::create_object<app::AkCallbackManager_BGMCallbackPackage>(get_class());
        }
    } // namespace AkCallbackManager_BGMCallbackPackage
} // namespace app::classes::types

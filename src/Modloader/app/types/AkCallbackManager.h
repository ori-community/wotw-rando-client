#pragma once
#include <Modloader/app/structs/AkCallbackManager.h>
#include <Modloader/app/structs/AkCallbackManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager {
        inline app::AkCallbackManager__Class** type_info() {
            static app::AkCallbackManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkCallbackManager__Class**)(modloader::win::memory::resolve_rva(0x0470BF28));
            }
            return cache;
        }
        inline app::AkCallbackManager__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackManager__Class>(type_info(), "", "AkCallbackManager");
        }
        inline app::AkCallbackManager* create() {
            return il2cpp::create_object<app::AkCallbackManager>(get_class());
        }
    } // namespace AkCallbackManager
} // namespace app::classes::types

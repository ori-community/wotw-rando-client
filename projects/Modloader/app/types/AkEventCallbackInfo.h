#pragma once
#include <Modloader/app/structs/AkEventCallbackInfo.h>
#include <Modloader/app/structs/AkEventCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkEventCallbackInfo {
        inline app::AkEventCallbackInfo__Class** type_info() {
            static app::AkEventCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkEventCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0476EC38));
            }
            return cache;
        }
        inline app::AkEventCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkEventCallbackInfo__Class>(type_info(), "", "AkEventCallbackInfo");
        }
        inline app::AkEventCallbackInfo* create() {
            return il2cpp::create_object<app::AkEventCallbackInfo>(get_class());
        }
    } // namespace AkEventCallbackInfo
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/AkMarkerCallbackInfo.h>
#include <Modloader/app/structs/AkMarkerCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMarkerCallbackInfo {
        inline app::AkMarkerCallbackInfo__Class** type_info() {
            static app::AkMarkerCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMarkerCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047063E0));
            }
            return cache;
        }
        inline app::AkMarkerCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMarkerCallbackInfo__Class>(type_info(), "", "AkMarkerCallbackInfo");
        }
        inline app::AkMarkerCallbackInfo* create() {
            return il2cpp::create_object<app::AkMarkerCallbackInfo>(get_class());
        }
    } // namespace AkMarkerCallbackInfo
} // namespace app::classes::types

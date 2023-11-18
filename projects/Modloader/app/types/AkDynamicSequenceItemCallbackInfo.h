#pragma once
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo.h>
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkDynamicSequenceItemCallbackInfo {
        inline app::AkDynamicSequenceItemCallbackInfo__Class** type_info() {
            static app::AkDynamicSequenceItemCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkDynamicSequenceItemCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0474BC08));
            }
            return cache;
        }
        inline app::AkDynamicSequenceItemCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkDynamicSequenceItemCallbackInfo__Class>(type_info(), "", "AkDynamicSequenceItemCallbackInfo");
        }
        inline app::AkDynamicSequenceItemCallbackInfo* create() {
            return il2cpp::create_object<app::AkDynamicSequenceItemCallbackInfo>(get_class());
        }
    } // namespace AkDynamicSequenceItemCallbackInfo
} // namespace app::classes::types

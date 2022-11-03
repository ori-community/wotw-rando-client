#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkDynamicSequenceItemCallbackInfo {
        inline app::AkDynamicSequenceItemCallbackInfo__Class** type_info = (app::AkDynamicSequenceItemCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0474BC08));
        inline app::AkDynamicSequenceItemCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkDynamicSequenceItemCallbackInfo__Class>(type_info, "", "AkDynamicSequenceItemCallbackInfo");
        }
        inline app::AkDynamicSequenceItemCallbackInfo* create() {
            return il2cpp::create_object<app::AkDynamicSequenceItemCallbackInfo>(get_class());
        }
    } // namespace AkDynamicSequenceItemCallbackInfo
} // namespace app::classes::types

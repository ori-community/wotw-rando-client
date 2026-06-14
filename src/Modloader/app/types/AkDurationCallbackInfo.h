#pragma once
#include <Modloader/app/structs/AkDurationCallbackInfo.h>
#include <Modloader/app/structs/AkDurationCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkDurationCallbackInfo {
        inline app::AkDurationCallbackInfo__Class** type_info() {
            static app::AkDurationCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkDurationCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04741528));
            }
            return cache;
        }
        inline app::AkDurationCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkDurationCallbackInfo__Class>(type_info(), "", "AkDurationCallbackInfo");
        }
        inline app::AkDurationCallbackInfo* create() {
            return il2cpp::create_object<app::AkDurationCallbackInfo>(get_class());
        }
    } // namespace AkDurationCallbackInfo
} // namespace app::classes::types

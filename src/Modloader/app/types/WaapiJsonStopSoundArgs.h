#pragma once
#include <Modloader/app/structs/WaapiJsonStopSoundArgs.h>
#include <Modloader/app/structs/WaapiJsonStopSoundArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonStopSoundArgs {
        inline app::WaapiJsonStopSoundArgs__Class** type_info() {
            static app::WaapiJsonStopSoundArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonStopSoundArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonStopSoundArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonStopSoundArgs__Class>(type_info(), "", "WaapiJsonStopSoundArgs");
        }
        inline app::WaapiJsonStopSoundArgs* create() {
            return il2cpp::create_object<app::WaapiJsonStopSoundArgs>(get_class());
        }
    } // namespace WaapiJsonStopSoundArgs
} // namespace app::classes::types

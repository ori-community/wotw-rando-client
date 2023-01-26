#pragma once
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs.h>
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonPlaySoundArgs {
        inline app::WaapiJsonPlaySoundArgs__Class** type_info() {
            static app::WaapiJsonPlaySoundArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonPlaySoundArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonPlaySoundArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonPlaySoundArgs__Class>(type_info(), "", "WaapiJsonPlaySoundArgs");
        }
        inline app::WaapiJsonPlaySoundArgs* create() {
            return il2cpp::create_object<app::WaapiJsonPlaySoundArgs>(get_class());
        }
    } // namespace WaapiJsonPlaySoundArgs
} // namespace app::classes::types

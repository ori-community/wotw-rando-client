#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonPlaySoundArgs {
        namespace {
            app::WaapiJsonPlaySoundArgs__Class* type_info_ref = nullptr;
        }
        app::WaapiJsonPlaySoundArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonPlaySoundArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonPlaySoundArgs__Class>(type_info, "", "WaapiJsonPlaySoundArgs");
        }
        inline app::WaapiJsonPlaySoundArgs* create() {
            return il2cpp::create_object<app::WaapiJsonPlaySoundArgs>(get_class());
        }
    } // namespace WaapiJsonPlaySoundArgs
} // namespace app::classes::types

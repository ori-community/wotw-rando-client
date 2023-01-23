#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs__Class.h>
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs.h>

namespace app::classes::types {
    namespace WaapiJsonPlaySoundArgs {
        namespace {
            inline app::WaapiJsonPlaySoundArgs__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonPlaySoundArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonPlaySoundArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonPlaySoundArgs__Class>(type_info, "", "WaapiJsonPlaySoundArgs");
        }
        inline app::WaapiJsonPlaySoundArgs* create() {
            return il2cpp::create_object<app::WaapiJsonPlaySoundArgs>(get_class());
        }
    } // namespace WaapiJsonPlaySoundArgs
} // namespace app::classes::types

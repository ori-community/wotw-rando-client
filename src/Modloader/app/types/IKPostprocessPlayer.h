#pragma once
#include <Modloader/app/structs/IKPostprocessPlayer.h>
#include <Modloader/app/structs/IKPostprocessPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKPostprocessPlayer {
        inline app::IKPostprocessPlayer__Class** type_info() {
            static app::IKPostprocessPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKPostprocessPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKPostprocessPlayer__Class* get_class() {
            return il2cpp::get_class<app::IKPostprocessPlayer__Class>(type_info(), "Moon.Timeline", "IKPostprocessPlayer");
        }
        inline app::IKPostprocessPlayer* create() {
            return il2cpp::create_object<app::IKPostprocessPlayer>(get_class());
        }
    } // namespace IKPostprocessPlayer
} // namespace app::classes::types

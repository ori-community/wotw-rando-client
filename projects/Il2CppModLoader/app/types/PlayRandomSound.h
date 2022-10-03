#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayRandomSound {
        namespace {
            app::PlayRandomSound__Class* type_info_ref = nullptr;
        }
        app::PlayRandomSound__Class** type_info = &type_info_ref;
        inline app::PlayRandomSound__Class* get_class() {
            return il2cpp::get_class<app::PlayRandomSound__Class>(type_info, "", "PlayRandomSound");
        }
        inline app::PlayRandomSound* create() {
            return il2cpp::create_object<app::PlayRandomSound>(get_class());
        }
    } // namespace PlayRandomSound
} // namespace app::classes::types

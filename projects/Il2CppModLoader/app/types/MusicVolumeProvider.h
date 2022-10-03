#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicVolumeProvider {
        namespace {
            app::MusicVolumeProvider__Class* type_info_ref = nullptr;
        }
        app::MusicVolumeProvider__Class** type_info = &type_info_ref;
        inline app::MusicVolumeProvider__Class* get_class() {
            return il2cpp::get_class<app::MusicVolumeProvider__Class>(type_info, "", "MusicVolumeProvider");
        }
        inline app::MusicVolumeProvider* create() {
            return il2cpp::create_object<app::MusicVolumeProvider>(get_class());
        }
    } // namespace MusicVolumeProvider
} // namespace app::classes::types

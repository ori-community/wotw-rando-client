#pragma once
#include <Modloader/app/structs/MusicVolumeProvider.h>
#include <Modloader/app/structs/MusicVolumeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicVolumeProvider {
        inline app::MusicVolumeProvider__Class** type_info() {
            static app::MusicVolumeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicVolumeProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicVolumeProvider__Class* get_class() {
            return il2cpp::get_class<app::MusicVolumeProvider__Class>(type_info(), "", "MusicVolumeProvider");
        }
        inline app::MusicVolumeProvider* create() {
            return il2cpp::create_object<app::MusicVolumeProvider>(get_class());
        }
    } // namespace MusicVolumeProvider
} // namespace app::classes::types

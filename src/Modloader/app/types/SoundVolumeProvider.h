#pragma once
#include <Modloader/app/structs/SoundVolumeProvider.h>
#include <Modloader/app/structs/SoundVolumeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundVolumeProvider {
        inline app::SoundVolumeProvider__Class** type_info() {
            static app::SoundVolumeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundVolumeProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundVolumeProvider__Class* get_class() {
            return il2cpp::get_class<app::SoundVolumeProvider__Class>(type_info(), "", "SoundVolumeProvider");
        }
        inline app::SoundVolumeProvider* create() {
            return il2cpp::create_object<app::SoundVolumeProvider>(get_class());
        }
    } // namespace SoundVolumeProvider
} // namespace app::classes::types

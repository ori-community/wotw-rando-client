#pragma once
#include <Modloader/app/structs/SurfaceBasedSoundProvider.h>
#include <Modloader/app/structs/SurfaceBasedSoundProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceBasedSoundProvider {
        inline app::SurfaceBasedSoundProvider__Class** type_info() {
            static app::SurfaceBasedSoundProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceBasedSoundProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::SurfaceBasedSoundProvider__Class>(type_info(), "", "SurfaceBasedSoundProvider");
        }
        inline app::SurfaceBasedSoundProvider* create() {
            return il2cpp::create_object<app::SurfaceBasedSoundProvider>(get_class());
        }
    } // namespace SurfaceBasedSoundProvider
} // namespace app::classes::types

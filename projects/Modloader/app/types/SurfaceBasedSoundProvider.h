#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SurfaceBasedSoundProvider__Class.h>
#include <Modloader/app/structs/SurfaceBasedSoundProvider.h>

namespace app::classes::types {
    namespace SurfaceBasedSoundProvider {
        namespace {
            inline app::SurfaceBasedSoundProvider__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceBasedSoundProvider__Class** type_info = &type_info_ref;
        inline app::SurfaceBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::SurfaceBasedSoundProvider__Class>(type_info, "", "SurfaceBasedSoundProvider");
        }
        inline app::SurfaceBasedSoundProvider* create() {
            return il2cpp::create_object<app::SurfaceBasedSoundProvider>(get_class());
        }
    } // namespace SurfaceBasedSoundProvider
} // namespace app::classes::types

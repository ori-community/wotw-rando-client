#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SurfaceMaterialSoundPair__Class.h>
#include <Modloader/app/structs/SurfaceMaterialSoundPair.h>

namespace app::classes::types {
    namespace SurfaceMaterialSoundPair {
        namespace {
            inline app::SurfaceMaterialSoundPair__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceMaterialSoundPair__Class** type_info = &type_info_ref;
        inline app::SurfaceMaterialSoundPair__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialSoundPair__Class>(type_info, "", "SurfaceMaterialSoundPair");
        }
        inline app::SurfaceMaterialSoundPair* create() {
            return il2cpp::create_object<app::SurfaceMaterialSoundPair>(get_class());
        }
    } // namespace SurfaceMaterialSoundPair
} // namespace app::classes::types

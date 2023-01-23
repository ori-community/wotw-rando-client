#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap__Class.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>

namespace app::classes::types {
    namespace SurfaceToSoundProviderMap {
        namespace {
            inline app::SurfaceToSoundProviderMap__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceToSoundProviderMap__Class** type_info = &type_info_ref;
        inline app::SurfaceToSoundProviderMap__Class* get_class() {
            return il2cpp::get_class<app::SurfaceToSoundProviderMap__Class>(type_info, "", "SurfaceToSoundProviderMap");
        }
        inline app::SurfaceToSoundProviderMap* create() {
            return il2cpp::create_object<app::SurfaceToSoundProviderMap>(get_class());
        }
    } // namespace SurfaceToSoundProviderMap
} // namespace app::classes::types

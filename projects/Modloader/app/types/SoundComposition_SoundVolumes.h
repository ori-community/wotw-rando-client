#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundComposition_SoundVolumes__Class.h>
#include <Modloader/app/structs/SoundComposition_SoundVolumes.h>

namespace app::classes::types {
    namespace SoundComposition_SoundVolumes {
        inline app::SoundComposition_SoundVolumes__Class** type_info = (app::SoundComposition_SoundVolumes__Class**)(modloader::win::memory::resolve_rva(0x04786E38));
        inline app::SoundComposition_SoundVolumes__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundComposition_SoundVolumes__Class>(type_info, "Core", "SoundComposition", "SoundVolumes");
        }
        inline app::SoundComposition_SoundVolumes* create() {
            return il2cpp::create_object<app::SoundComposition_SoundVolumes>(get_class());
        }
    } // namespace SoundComposition_SoundVolumes
} // namespace app::classes::types

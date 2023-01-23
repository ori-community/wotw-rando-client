#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundVolumeProvider__Class.h>
#include <Modloader/app/structs/SoundVolumeProvider.h>

namespace app::classes::types {
    namespace SoundVolumeProvider {
        namespace {
            inline app::SoundVolumeProvider__Class* type_info_ref = nullptr;
        }
        inline app::SoundVolumeProvider__Class** type_info = &type_info_ref;
        inline app::SoundVolumeProvider__Class* get_class() {
            return il2cpp::get_class<app::SoundVolumeProvider__Class>(type_info, "", "SoundVolumeProvider");
        }
        inline app::SoundVolumeProvider* create() {
            return il2cpp::create_object<app::SoundVolumeProvider>(get_class());
        }
    } // namespace SoundVolumeProvider
} // namespace app::classes::types

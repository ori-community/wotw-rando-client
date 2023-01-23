#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MusicVolumeProvider__Class.h>
#include <Modloader/app/structs/MusicVolumeProvider.h>

namespace app::classes::types {
    namespace MusicVolumeProvider {
        namespace {
            inline app::MusicVolumeProvider__Class* type_info_ref = nullptr;
        }
        inline app::MusicVolumeProvider__Class** type_info = &type_info_ref;
        inline app::MusicVolumeProvider__Class* get_class() {
            return il2cpp::get_class<app::MusicVolumeProvider__Class>(type_info, "", "MusicVolumeProvider");
        }
        inline app::MusicVolumeProvider* create() {
            return il2cpp::create_object<app::MusicVolumeProvider>(get_class());
        }
    } // namespace MusicVolumeProvider
} // namespace app::classes::types

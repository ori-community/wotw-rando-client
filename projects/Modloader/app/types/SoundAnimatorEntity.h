#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundAnimatorEntity {
        namespace {
            inline app::SoundAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::SoundAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::SoundAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::SoundAnimatorEntity__Class>(type_info, "Moon.Timeline", "SoundAnimatorEntity");
        }
        inline app::SoundAnimatorEntity* create() {
            return il2cpp::create_object<app::SoundAnimatorEntity>(get_class());
        }
    } // namespace SoundAnimatorEntity
} // namespace app::classes::types

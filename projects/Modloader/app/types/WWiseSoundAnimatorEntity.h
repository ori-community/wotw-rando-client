#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WWiseSoundAnimatorEntity__Class.h>
#include <Modloader/app/structs/WWiseSoundAnimatorEntity.h>

namespace app::classes::types {
    namespace WWiseSoundAnimatorEntity {
        namespace {
            inline app::WWiseSoundAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::WWiseSoundAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::WWiseSoundAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::WWiseSoundAnimatorEntity__Class>(type_info, "Moon.Timeline", "WWiseSoundAnimatorEntity");
        }
        inline app::WWiseSoundAnimatorEntity* create() {
            return il2cpp::create_object<app::WWiseSoundAnimatorEntity>(get_class());
        }
    } // namespace WWiseSoundAnimatorEntity
} // namespace app::classes::types

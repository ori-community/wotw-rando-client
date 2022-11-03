#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLeashEffectPose {
        namespace {
            inline app::SpiritLeashEffectPose__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLeashEffectPose__Class** type_info = &type_info_ref;
        inline app::SpiritLeashEffectPose__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectPose__Class>(type_info, "", "SpiritLeashEffectPose");
        }
        inline app::SpiritLeashEffectPose* create() {
            return il2cpp::create_object<app::SpiritLeashEffectPose>(get_class());
        }
    } // namespace SpiritLeashEffectPose
} // namespace app::classes::types

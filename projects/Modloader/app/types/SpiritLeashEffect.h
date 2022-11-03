#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLeashEffect {
        namespace {
            inline app::SpiritLeashEffect__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLeashEffect__Class** type_info = &type_info_ref;
        inline app::SpiritLeashEffect__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffect__Class>(type_info, "", "SpiritLeashEffect");
        }
        inline app::SpiritLeashEffect* create() {
            return il2cpp::create_object<app::SpiritLeashEffect>(get_class());
        }
    } // namespace SpiritLeashEffect
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FoxHeadHurtZone {
        namespace {
            inline app::FoxHeadHurtZone__Class* type_info_ref = nullptr;
        }
        inline app::FoxHeadHurtZone__Class** type_info = &type_info_ref;
        inline app::FoxHeadHurtZone__Class* get_class() {
            return il2cpp::get_class<app::FoxHeadHurtZone__Class>(type_info, "", "FoxHeadHurtZone");
        }
        inline app::FoxHeadHurtZone* create() {
            return il2cpp::create_object<app::FoxHeadHurtZone>(get_class());
        }
    } // namespace FoxHeadHurtZone
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AmbienceZone__Class.h>
#include <Modloader/app/structs/AmbienceZone.h>

namespace app::classes::types {
    namespace AmbienceZone {
        namespace {
            inline app::AmbienceZone__Class* type_info_ref = nullptr;
        }
        inline app::AmbienceZone__Class** type_info = &type_info_ref;
        inline app::AmbienceZone__Class* get_class() {
            return il2cpp::get_class<app::AmbienceZone__Class>(type_info, "", "AmbienceZone");
        }
        inline app::AmbienceZone* create() {
            return il2cpp::create_object<app::AmbienceZone>(get_class());
        }
    } // namespace AmbienceZone
} // namespace app::classes::types

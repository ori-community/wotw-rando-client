#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceFinishIcon__Class.h>
#include <Modloader/app/structs/RaceFinishIcon.h>

namespace app::classes::types {
    namespace RaceFinishIcon {
        namespace {
            inline app::RaceFinishIcon__Class* type_info_ref = nullptr;
        }
        inline app::RaceFinishIcon__Class** type_info = &type_info_ref;
        inline app::RaceFinishIcon__Class* get_class() {
            return il2cpp::get_class<app::RaceFinishIcon__Class>(type_info, "", "RaceFinishIcon");
        }
        inline app::RaceFinishIcon* create() {
            return il2cpp::create_object<app::RaceFinishIcon>(get_class());
        }
    } // namespace RaceFinishIcon
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TrailerShotAutomation__Class.h>
#include <Modloader/app/structs/TrailerShotAutomation.h>

namespace app::classes::types {
    namespace TrailerShotAutomation {
        inline app::TrailerShotAutomation__Class** type_info = (app::TrailerShotAutomation__Class**)(modloader::win::memory::resolve_rva(0x04753460));
        inline app::TrailerShotAutomation__Class* get_class() {
            return il2cpp::get_class<app::TrailerShotAutomation__Class>(type_info, "", "TrailerShotAutomation");
        }
        inline app::TrailerShotAutomation* create() {
            return il2cpp::create_object<app::TrailerShotAutomation>(get_class());
        }
    } // namespace TrailerShotAutomation
} // namespace app::classes::types

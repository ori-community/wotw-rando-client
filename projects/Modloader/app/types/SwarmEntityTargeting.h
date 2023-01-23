#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwarmEntityTargeting__Class.h>
#include <Modloader/app/structs/SwarmEntityTargeting.h>

namespace app::classes::types {
    namespace SwarmEntityTargeting {
        inline app::SwarmEntityTargeting__Class** type_info = (app::SwarmEntityTargeting__Class**)(modloader::win::memory::resolve_rva(0x04760668));
        inline app::SwarmEntityTargeting__Class* get_class() {
            return il2cpp::get_class<app::SwarmEntityTargeting__Class>(type_info, "", "SwarmEntityTargeting");
        }
        inline app::SwarmEntityTargeting* create() {
            return il2cpp::create_object<app::SwarmEntityTargeting>(get_class());
        }
    } // namespace SwarmEntityTargeting
} // namespace app::classes::types

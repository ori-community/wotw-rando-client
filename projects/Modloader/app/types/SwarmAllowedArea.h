#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwarmAllowedArea__Class.h>
#include <Modloader/app/structs/SwarmAllowedArea.h>

namespace app::classes::types {
    namespace SwarmAllowedArea {
        namespace {
            inline app::SwarmAllowedArea__Class* type_info_ref = nullptr;
        }
        inline app::SwarmAllowedArea__Class** type_info = &type_info_ref;
        inline app::SwarmAllowedArea__Class* get_class() {
            return il2cpp::get_class<app::SwarmAllowedArea__Class>(type_info, "", "SwarmAllowedArea");
        }
        inline app::SwarmAllowedArea* create() {
            return il2cpp::create_object<app::SwarmAllowedArea>(get_class());
        }
    } // namespace SwarmAllowedArea
} // namespace app::classes::types

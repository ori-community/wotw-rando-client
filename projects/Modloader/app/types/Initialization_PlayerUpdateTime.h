#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Initialization_PlayerUpdateTime__Class.h>
#include <Modloader/app/structs/Initialization_PlayerUpdateTime.h>
#include <Modloader/app/structs/Initialization_PlayerUpdateTime__Boxed.h>

namespace app::classes::types {
    namespace Initialization_PlayerUpdateTime {
        namespace {
            inline app::Initialization_PlayerUpdateTime__Class* type_info_ref = nullptr;
        }
        inline app::Initialization_PlayerUpdateTime__Class** type_info = &type_info_ref;
        inline app::Initialization_PlayerUpdateTime__Class* get_class() {
            return il2cpp::get_nested_class<app::Initialization_PlayerUpdateTime__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Initialization", "PlayerUpdateTime");
        }
        inline app::Initialization_PlayerUpdateTime* create() {
            return il2cpp::create_object<app::Initialization_PlayerUpdateTime>(get_class());
        }
        inline app::Initialization_PlayerUpdateTime__Boxed* box(app::Initialization_PlayerUpdateTime value) {
            return il2cpp::box_value<app::Initialization_PlayerUpdateTime__Boxed>(get_class(), value);
        }
    } // namespace Initialization_PlayerUpdateTime
} // namespace app::classes::types

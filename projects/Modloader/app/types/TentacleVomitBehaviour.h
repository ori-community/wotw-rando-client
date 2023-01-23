#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleVomitBehaviour__Class.h>
#include <Modloader/app/structs/TentacleVomitBehaviour.h>

namespace app::classes::types {
    namespace TentacleVomitBehaviour {
        namespace {
            inline app::TentacleVomitBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TentacleVomitBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleVomitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleVomitBehaviour__Class>(type_info, "Moon", "TentacleVomitBehaviour");
        }
        inline app::TentacleVomitBehaviour* create() {
            return il2cpp::create_object<app::TentacleVomitBehaviour>(get_class());
        }
    } // namespace TentacleVomitBehaviour
} // namespace app::classes::types

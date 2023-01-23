#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Initialization__Class.h>
#include <Modloader/app/structs/Initialization.h>
#include <Modloader/app/structs/Initialization__Boxed.h>

namespace app::classes::types {
    namespace Initialization {
        namespace {
            inline app::Initialization__Class* type_info_ref = nullptr;
        }
        inline app::Initialization__Class** type_info = &type_info_ref;
        inline app::Initialization__Class* get_class() {
            return il2cpp::get_class<app::Initialization__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Initialization");
        }
        inline app::Initialization* create() {
            return il2cpp::create_object<app::Initialization>(get_class());
        }
        inline app::Initialization__Boxed* box(app::Initialization value) {
            return il2cpp::box_value<app::Initialization__Boxed>(get_class(), value);
        }
    } // namespace Initialization
} // namespace app::classes::types

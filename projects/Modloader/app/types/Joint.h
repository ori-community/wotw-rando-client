#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Joint__Class.h>
#include <Modloader/app/structs/Joint.h>

namespace app::classes::types {
    namespace Joint {
        namespace {
            inline app::Joint__Class* type_info_ref = nullptr;
        }
        inline app::Joint__Class** type_info = &type_info_ref;
        inline app::Joint__Class* get_class() {
            return il2cpp::get_class<app::Joint__Class>(type_info, "UnityEngine", "Joint");
        }
        inline app::Joint* create() {
            return il2cpp::create_object<app::Joint>(get_class());
        }
    } // namespace Joint
} // namespace app::classes::types

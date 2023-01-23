#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Shadow__Class.h>
#include <Modloader/app/structs/Shadow.h>

namespace app::classes::types {
    namespace Shadow {
        namespace {
            inline app::Shadow__Class* type_info_ref = nullptr;
        }
        inline app::Shadow__Class** type_info = &type_info_ref;
        inline app::Shadow__Class* get_class() {
            return il2cpp::get_class<app::Shadow__Class>(type_info, "UnityEngine.UI", "Shadow");
        }
        inline app::Shadow* create() {
            return il2cpp::create_object<app::Shadow>(get_class());
        }
    } // namespace Shadow
} // namespace app::classes::types

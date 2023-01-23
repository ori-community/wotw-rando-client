#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EarlyUpdate_UpdatePreloading__Class.h>
#include <Modloader/app/structs/EarlyUpdate_UpdatePreloading.h>
#include <Modloader/app/structs/EarlyUpdate_UpdatePreloading__Boxed.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdatePreloading {
        namespace {
            inline app::EarlyUpdate_UpdatePreloading__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_UpdatePreloading__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdatePreloading__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdatePreloading__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdatePreloading");
        }
        inline app::EarlyUpdate_UpdatePreloading* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdatePreloading>(get_class());
        }
        inline app::EarlyUpdate_UpdatePreloading__Boxed* box(app::EarlyUpdate_UpdatePreloading value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdatePreloading__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdatePreloading
} // namespace app::classes::types

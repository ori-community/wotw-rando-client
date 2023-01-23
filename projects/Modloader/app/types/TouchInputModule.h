#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TouchInputModule__Class.h>
#include <Modloader/app/structs/TouchInputModule.h>

namespace app::classes::types {
    namespace TouchInputModule {
        namespace {
            inline app::TouchInputModule__Class* type_info_ref = nullptr;
        }
        inline app::TouchInputModule__Class** type_info = &type_info_ref;
        inline app::TouchInputModule__Class* get_class() {
            return il2cpp::get_class<app::TouchInputModule__Class>(type_info, "UnityEngine.EventSystems", "TouchInputModule");
        }
        inline app::TouchInputModule* create() {
            return il2cpp::create_object<app::TouchInputModule>(get_class());
        }
    } // namespace TouchInputModule
} // namespace app::classes::types

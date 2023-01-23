#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VFXEventAttribute__Class.h>
#include <Modloader/app/structs/VFXEventAttribute.h>

namespace app::classes::types {
    namespace VFXEventAttribute {
        namespace {
            inline app::VFXEventAttribute__Class* type_info_ref = nullptr;
        }
        inline app::VFXEventAttribute__Class** type_info = &type_info_ref;
        inline app::VFXEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::VFXEventAttribute__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXEventAttribute");
        }
        inline app::VFXEventAttribute* create() {
            return il2cpp::create_object<app::VFXEventAttribute>(get_class());
        }
    } // namespace VFXEventAttribute
} // namespace app::classes::types

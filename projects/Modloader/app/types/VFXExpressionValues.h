#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VFXExpressionValues__Class.h>
#include <Modloader/app/structs/VFXExpressionValues.h>

namespace app::classes::types {
    namespace VFXExpressionValues {
        inline app::VFXExpressionValues__Class** type_info = (app::VFXExpressionValues__Class**)(modloader::win::memory::resolve_rva(0x04799208));
        inline app::VFXExpressionValues__Class* get_class() {
            return il2cpp::get_class<app::VFXExpressionValues__Class>(type_info, "UnityEngine.Experimental.VFX", "VFXExpressionValues");
        }
        inline app::VFXExpressionValues* create() {
            return il2cpp::create_object<app::VFXExpressionValues>(get_class());
        }
    } // namespace VFXExpressionValues
} // namespace app::classes::types

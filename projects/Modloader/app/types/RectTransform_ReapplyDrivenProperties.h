#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RectTransform_ReapplyDrivenProperties__Class.h>
#include <Modloader/app/structs/RectTransform_ReapplyDrivenProperties.h>

namespace app::classes::types {
    namespace RectTransform_ReapplyDrivenProperties {
        inline app::RectTransform_ReapplyDrivenProperties__Class** type_info = (app::RectTransform_ReapplyDrivenProperties__Class**)(modloader::win::memory::resolve_rva(0x047283C8));
        inline app::RectTransform_ReapplyDrivenProperties__Class* get_class() {
            return il2cpp::get_nested_class<app::RectTransform_ReapplyDrivenProperties__Class>(type_info, "UnityEngine", "RectTransform", "ReapplyDrivenProperties");
        }
        inline app::RectTransform_ReapplyDrivenProperties* create() {
            return il2cpp::create_object<app::RectTransform_ReapplyDrivenProperties>(get_class());
        }
    } // namespace RectTransform_ReapplyDrivenProperties
} // namespace app::classes::types

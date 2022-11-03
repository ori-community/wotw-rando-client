#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExcludeFromPresetAttribute {
        namespace {
            inline app::ExcludeFromPresetAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ExcludeFromPresetAttribute__Class** type_info = &type_info_ref;
        inline app::ExcludeFromPresetAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromPresetAttribute__Class>(type_info, "UnityEngine", "ExcludeFromPresetAttribute");
        }
        inline app::ExcludeFromPresetAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromPresetAttribute>(get_class());
        }
    } // namespace ExcludeFromPresetAttribute
} // namespace app::classes::types

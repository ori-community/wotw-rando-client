#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ILayoutGroup__Class.h>

namespace app::classes::types {
    namespace ILayoutGroup {
        namespace {
            inline app::ILayoutGroup__Class* type_info_ref = nullptr;
        }
        inline app::ILayoutGroup__Class** type_info = &type_info_ref;
        inline app::ILayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::ILayoutGroup__Class>(type_info, "UnityEngine.UI", "ILayoutGroup");
        }
    } // namespace ILayoutGroup
} // namespace app::classes::types

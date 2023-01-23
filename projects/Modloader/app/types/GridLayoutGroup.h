#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GridLayoutGroup__Class.h>
#include <Modloader/app/structs/GridLayoutGroup.h>

namespace app::classes::types {
    namespace GridLayoutGroup {
        namespace {
            inline app::GridLayoutGroup__Class* type_info_ref = nullptr;
        }
        inline app::GridLayoutGroup__Class** type_info = &type_info_ref;
        inline app::GridLayoutGroup__Class* get_class() {
            return il2cpp::get_class<app::GridLayoutGroup__Class>(type_info, "UnityEngine.UI", "GridLayoutGroup");
        }
        inline app::GridLayoutGroup* create() {
            return il2cpp::create_object<app::GridLayoutGroup>(get_class());
        }
    } // namespace GridLayoutGroup
} // namespace app::classes::types

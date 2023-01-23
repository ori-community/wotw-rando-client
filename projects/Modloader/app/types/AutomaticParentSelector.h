#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AutomaticParentSelector__Class.h>
#include <Modloader/app/structs/AutomaticParentSelector.h>

namespace app::classes::types {
    namespace AutomaticParentSelector {
        namespace {
            inline app::AutomaticParentSelector__Class* type_info_ref = nullptr;
        }
        inline app::AutomaticParentSelector__Class** type_info = &type_info_ref;
        inline app::AutomaticParentSelector__Class* get_class() {
            return il2cpp::get_class<app::AutomaticParentSelector__Class>(type_info, "CatlikeCoding.Utilities", "AutomaticParentSelector");
        }
        inline app::AutomaticParentSelector* create() {
            return il2cpp::create_object<app::AutomaticParentSelector>(get_class());
        }
    } // namespace AutomaticParentSelector
} // namespace app::classes::types

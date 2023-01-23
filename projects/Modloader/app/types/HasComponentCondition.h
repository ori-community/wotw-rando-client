#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HasComponentCondition__Class.h>
#include <Modloader/app/structs/HasComponentCondition.h>

namespace app::classes::types {
    namespace HasComponentCondition {
        namespace {
            inline app::HasComponentCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasComponentCondition__Class** type_info = &type_info_ref;
        inline app::HasComponentCondition__Class* get_class() {
            return il2cpp::get_class<app::HasComponentCondition__Class>(type_info, "", "HasComponentCondition");
        }
        inline app::HasComponentCondition* create() {
            return il2cpp::create_object<app::HasComponentCondition>(get_class());
        }
    } // namespace HasComponentCondition
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinWorldStateCondition__Class.h>
#include <Modloader/app/structs/SeinWorldStateCondition.h>

namespace app::classes::types {
    namespace SeinWorldStateCondition {
        namespace {
            inline app::SeinWorldStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinWorldStateCondition__Class** type_info = &type_info_ref;
        inline app::SeinWorldStateCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinWorldStateCondition__Class>(type_info, "", "SeinWorldStateCondition");
        }
        inline app::SeinWorldStateCondition* create() {
            return il2cpp::create_object<app::SeinWorldStateCondition>(get_class());
        }
    } // namespace SeinWorldStateCondition
} // namespace app::classes::types

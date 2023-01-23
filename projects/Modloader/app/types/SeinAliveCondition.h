#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAliveCondition__Class.h>
#include <Modloader/app/structs/SeinAliveCondition.h>

namespace app::classes::types {
    namespace SeinAliveCondition {
        namespace {
            inline app::SeinAliveCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinAliveCondition__Class** type_info = &type_info_ref;
        inline app::SeinAliveCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAliveCondition__Class>(type_info, "", "SeinAliveCondition");
        }
        inline app::SeinAliveCondition* create() {
            return il2cpp::create_object<app::SeinAliveCondition>(get_class());
        }
    } // namespace SeinAliveCondition
} // namespace app::classes::types

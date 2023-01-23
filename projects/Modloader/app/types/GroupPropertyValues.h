#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupPropertyValues__Class.h>
#include <Modloader/app/structs/GroupPropertyValues.h>

namespace app::classes::types {
    namespace GroupPropertyValues {
        namespace {
            inline app::GroupPropertyValues__Class* type_info_ref = nullptr;
        }
        inline app::GroupPropertyValues__Class** type_info = &type_info_ref;
        inline app::GroupPropertyValues__Class* get_class() {
            return il2cpp::get_class<app::GroupPropertyValues__Class>(type_info, "PlayFab.PlayStreamModels", "GroupPropertyValues");
        }
        inline app::GroupPropertyValues* create() {
            return il2cpp::create_object<app::GroupPropertyValues>(get_class());
        }
    } // namespace GroupPropertyValues
} // namespace app::classes::types

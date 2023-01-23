#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SourceType__Enum__Class.h>
#include <Modloader/app/structs/SourceType__Enum.h>

namespace app::classes::types {
    namespace SourceType__Enum {
        namespace {
            inline app::SourceType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SourceType__Enum__Class** type_info = &type_info_ref;
        inline app::SourceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SourceType__Enum__Class>(type_info, "PlayFab.ClientModels", "SourceType");
        }
        inline app::SourceType__Enum* create() {
            return il2cpp::create_object<app::SourceType__Enum>(get_class());
        }
    } // namespace SourceType__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetObjectInfo__Array__Class.h>
#include <Modloader/app/structs/SetObjectInfo__Array.h>

namespace app::classes::types {
    namespace SetObjectInfo__Array {
        namespace {
            inline app::SetObjectInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::SetObjectInfo__Array__Class** type_info = &type_info_ref;
        inline app::SetObjectInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SetObjectInfo__Array__Class>(type_info, "PlayFab.DataModels", "SetObjectInfo[]");
        }
        inline app::SetObjectInfo__Array* create() {
            return il2cpp::create_object<app::SetObjectInfo__Array>(get_class());
        }
    } // namespace SetObjectInfo__Array
} // namespace app::classes::types

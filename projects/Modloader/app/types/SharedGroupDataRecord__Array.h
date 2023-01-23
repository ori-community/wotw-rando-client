#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SharedGroupDataRecord__Array__Class.h>
#include <Modloader/app/structs/SharedGroupDataRecord__Array.h>

namespace app::classes::types {
    namespace SharedGroupDataRecord__Array {
        namespace {
            inline app::SharedGroupDataRecord__Array__Class* type_info_ref = nullptr;
        }
        inline app::SharedGroupDataRecord__Array__Class** type_info = &type_info_ref;
        inline app::SharedGroupDataRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::SharedGroupDataRecord__Array__Class>(type_info, "PlayFab.ClientModels", "SharedGroupDataRecord[]");
        }
        inline app::SharedGroupDataRecord__Array* create() {
            return il2cpp::create_object<app::SharedGroupDataRecord__Array>(get_class());
        }
    } // namespace SharedGroupDataRecord__Array
} // namespace app::classes::types

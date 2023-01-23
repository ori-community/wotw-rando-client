#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValueToDateModel_1__Array__Class.h>
#include <Modloader/app/structs/ValueToDateModel_1__Array.h>

namespace app::classes::types {
    namespace ValueToDateModel_1__Array {
        namespace {
            inline app::ValueToDateModel_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::ValueToDateModel_1__Array__Class** type_info = &type_info_ref;
        inline app::ValueToDateModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ValueToDateModel_1__Array__Class>(type_info, "PlayFab.ServerModels", "ValueToDateModel[]");
        }
        inline app::ValueToDateModel_1__Array* create() {
            return il2cpp::create_object<app::ValueToDateModel_1__Array>(get_class());
        }
    } // namespace ValueToDateModel_1__Array
} // namespace app::classes::types

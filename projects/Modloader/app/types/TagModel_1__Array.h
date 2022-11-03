#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TagModel_1__Array {
        namespace {
            inline app::TagModel_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::TagModel_1__Array__Class** type_info = &type_info_ref;
        inline app::TagModel_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TagModel_1__Array__Class>(type_info, "PlayFab.ServerModels", "TagModel[]");
        }
        inline app::TagModel_1__Array* create() {
            return il2cpp::create_object<app::TagModel_1__Array>(get_class());
        }
    } // namespace TagModel_1__Array
} // namespace app::classes::types

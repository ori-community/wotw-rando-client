#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TagModel_1__Class.h>
#include <Modloader/app/structs/TagModel_1.h>
#include <Modloader/app/structs/TagModel_1__Array.h>

namespace app::classes::types {
    namespace TagModel_1 {
        namespace {
            inline app::TagModel_1__Class* type_info_ref = nullptr;
        }
        inline app::TagModel_1__Class** type_info = &type_info_ref;
        inline app::TagModel_1__Class* get_class() {
            return il2cpp::get_class<app::TagModel_1__Class>(type_info, "PlayFab.ServerModels", "TagModel");
        }
        inline app::TagModel_1* create() {
            return il2cpp::create_object<app::TagModel_1>(get_class());
        }
        inline app::TagModel_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TagModel_1__Array>(get_class(), size);
        }
        inline app::TagModel_1__Array* create_array(const std::vector<app::TagModel_1*>& items) {
            return il2cpp::array_new<app::TagModel_1__Array>(get_class(), items);
        }
    } // namespace TagModel_1
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharMetaData__Class.h>
#include <Modloader/app/structs/CharMetaData.h>
#include <Modloader/app/structs/CharMetaData__Boxed.h>
#include <Modloader/app/structs/CharMetaData__Array.h>

namespace app::classes::types {
    namespace CharMetaData {
        namespace {
            inline app::CharMetaData__Class* type_info_ref = nullptr;
        }
        inline app::CharMetaData__Class** type_info = &type_info_ref;
        inline app::CharMetaData__Class* get_class() {
            return il2cpp::get_class<app::CharMetaData__Class>(type_info, "CatlikeCoding.TextBox", "CharMetaData");
        }
        inline app::CharMetaData* create() {
            return il2cpp::create_object<app::CharMetaData>(get_class());
        }
        inline app::CharMetaData__Boxed* box(app::CharMetaData value) {
            return il2cpp::box_value<app::CharMetaData__Boxed>(get_class(), value);
        }
        inline app::CharMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::CharMetaData__Array>(get_class(), size);
        }
        inline app::CharMetaData__Array* create_array(const std::vector<app::CharMetaData>& items) {
            return il2cpp::array_new<app::CharMetaData__Array>(get_class(), items);
        }
    } // namespace CharMetaData
} // namespace app::classes::types

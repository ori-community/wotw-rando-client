#pragma once
#include <Modloader/app/structs/CharMetaData.h>
#include <Modloader/app/structs/CharMetaData__Array.h>
#include <Modloader/app/structs/CharMetaData__Boxed.h>
#include <Modloader/app/structs/CharMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharMetaData {
        inline app::CharMetaData__Class** type_info() {
            static app::CharMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharMetaData__Class* get_class() {
            return il2cpp::get_class<app::CharMetaData__Class>(type_info(), "CatlikeCoding.TextBox", "CharMetaData");
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

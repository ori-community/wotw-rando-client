#pragma once
#include <Modloader/app/structs/Text_1.h>
#include <Modloader/app/structs/Text_1__Array.h>
#include <Modloader/app/structs/Text_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Text_1 {
        inline app::Text_1__Class** type_info() {
            static app::Text_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Text_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Text_1__Class* get_class() {
            return il2cpp::get_class<app::Text_1__Class>(type_info(), "Moon.UI", "Text");
        }
        inline app::Text_1* create() {
            return il2cpp::create_object<app::Text_1>(get_class());
        }
        inline app::Text_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Text_1__Array>(get_class(), size);
        }
        inline app::Text_1__Array* create_array(const std::vector<app::Text_1*>& items) {
            return il2cpp::array_new<app::Text_1__Array>(get_class(), items);
        }
    } // namespace Text_1
} // namespace app::classes::types

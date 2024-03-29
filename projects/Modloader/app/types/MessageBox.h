#pragma once
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageBox__Array.h>
#include <Modloader/app/structs/MessageBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageBox {
        inline app::MessageBox__Class** type_info() {
            static app::MessageBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageBox__Class* get_class() {
            return il2cpp::get_class<app::MessageBox__Class>(type_info(), "", "MessageBox");
        }
        inline app::MessageBox* create() {
            return il2cpp::create_object<app::MessageBox>(get_class());
        }
        inline app::MessageBox__Array* create_array(int size) {
            return il2cpp::array_new<app::MessageBox__Array>(get_class(), size);
        }
        inline app::MessageBox__Array* create_array(const std::vector<app::MessageBox*>& items) {
            return il2cpp::array_new<app::MessageBox__Array>(get_class(), items);
        }
    } // namespace MessageBox
} // namespace app::classes::types

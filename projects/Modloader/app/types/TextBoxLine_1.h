#pragma once
#include <Modloader/app/structs/TextBoxLine_1.h>
#include <Modloader/app/structs/TextBoxLine_1__Array.h>
#include <Modloader/app/structs/TextBoxLine_1__Boxed.h>
#include <Modloader/app/structs/TextBoxLine_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxLine_1 {
        inline app::TextBoxLine_1__Class** type_info() {
            static app::TextBoxLine_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextBoxLine_1__Class**)(modloader::win::memory::resolve_rva(0x0470F4E0));
            }
            return cache;
        }
        inline app::TextBoxLine_1__Class* get_class() {
            return il2cpp::get_class<app::TextBoxLine_1__Class>(type_info(), "Moon.UI", "TextBoxLine");
        }
        inline app::TextBoxLine_1* create() {
            return il2cpp::create_object<app::TextBoxLine_1>(get_class());
        }
        inline app::TextBoxLine_1__Boxed* box(app::TextBoxLine_1 value) {
            return il2cpp::box_value<app::TextBoxLine_1__Boxed>(get_class(), value);
        }
        inline app::TextBoxLine_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TextBoxLine_1__Array>(get_class(), size);
        }
        inline app::TextBoxLine_1__Array* create_array(const std::vector<app::TextBoxLine_1>& items) {
            return il2cpp::array_new<app::TextBoxLine_1__Array>(get_class(), items);
        }
    } // namespace TextBoxLine_1
} // namespace app::classes::types

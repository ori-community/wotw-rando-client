#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData__Class.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData__Array.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator_IconData {
        namespace {
            inline app::TextBoxIconsFontGenerator_IconData__Class* type_info_ref = nullptr;
        }
        inline app::TextBoxIconsFontGenerator_IconData__Class** type_info = &type_info_ref;
        inline app::TextBoxIconsFontGenerator_IconData__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxIconsFontGenerator_IconData__Class>(type_info, "", "TextBoxIconsFontGenerator", "IconData");
        }
        inline app::TextBoxIconsFontGenerator_IconData* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator_IconData>(get_class());
        }
        inline app::TextBoxIconsFontGenerator_IconData__Array* create_array(int size) {
            return il2cpp::array_new<app::TextBoxIconsFontGenerator_IconData__Array>(get_class(), size);
        }
        inline app::TextBoxIconsFontGenerator_IconData__Array* create_array(const std::vector<app::TextBoxIconsFontGenerator_IconData*>& items) {
            return il2cpp::array_new<app::TextBoxIconsFontGenerator_IconData__Array>(get_class(), items);
        }
    } // namespace TextBoxIconsFontGenerator_IconData
} // namespace app::classes::types

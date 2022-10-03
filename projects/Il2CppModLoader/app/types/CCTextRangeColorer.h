#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCTextRangeColorer {
        namespace {
            app::CCTextRangeColorer__Class* type_info_ref = nullptr;
        }
        app::CCTextRangeColorer__Class** type_info = &type_info_ref;
        inline app::CCTextRangeColorer__Class* get_class() {
            return il2cpp::get_class<app::CCTextRangeColorer__Class>(type_info, "", "CCTextRangeColorer");
        }
        inline app::CCTextRangeColorer* create() {
            return il2cpp::create_object<app::CCTextRangeColorer>(get_class());
        }
    } // namespace CCTextRangeColorer
} // namespace app::classes::types

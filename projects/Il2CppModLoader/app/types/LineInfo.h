#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LineInfo {
        namespace {
            app::LineInfo__Class* type_info_ref = nullptr;
        }
        app::LineInfo__Class** type_info = &type_info_ref;
        inline app::LineInfo__Class* get_class() {
            return il2cpp::get_class<app::LineInfo__Class>(type_info, "System.Xml", "LineInfo");
        }
        inline app::LineInfo* create() {
            return il2cpp::create_object<app::LineInfo>(get_class());
        }
        inline app::LineInfo__Boxed* box(app::LineInfo value) {
            return il2cpp::box_value<app::LineInfo__Boxed>(get_class(), value);
        }
    } // namespace LineInfo
} // namespace app::classes::types

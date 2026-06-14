#pragma once
#include <Modloader/app/structs/LineInfo.h>
#include <Modloader/app/structs/LineInfo__Boxed.h>
#include <Modloader/app/structs/LineInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineInfo {
        inline app::LineInfo__Class** type_info() {
            static app::LineInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineInfo__Class* get_class() {
            return il2cpp::get_class<app::LineInfo__Class>(type_info(), "System.Xml", "LineInfo");
        }
        inline app::LineInfo* create() {
            return il2cpp::create_object<app::LineInfo>(get_class());
        }
        inline app::LineInfo__Boxed* box(app::LineInfo value) {
            return il2cpp::box_value<app::LineInfo__Boxed>(get_class(), value);
        }
    } // namespace LineInfo
} // namespace app::classes::types

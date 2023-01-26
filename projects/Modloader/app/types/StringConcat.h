#pragma once
#include <Modloader/app/structs/StringConcat.h>
#include <Modloader/app/structs/StringConcat__Boxed.h>
#include <Modloader/app/structs/StringConcat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringConcat {
        inline app::StringConcat__Class** type_info() {
            static app::StringConcat__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StringConcat__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StringConcat__Class* get_class() {
            return il2cpp::get_class<app::StringConcat__Class>(type_info(), "System.Xml.Xsl.Runtime", "StringConcat");
        }
        inline app::StringConcat* create() {
            return il2cpp::create_object<app::StringConcat>(get_class());
        }
        inline app::StringConcat__Boxed* box(app::StringConcat value) {
            return il2cpp::box_value<app::StringConcat__Boxed>(get_class(), value);
        }
    } // namespace StringConcat
} // namespace app::classes::types

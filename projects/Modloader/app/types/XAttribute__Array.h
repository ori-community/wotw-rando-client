#pragma once
#include <Modloader/app/structs/XAttribute__Array.h>
#include <Modloader/app/structs/XAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XAttribute__Array {
        inline app::XAttribute__Array__Class** type_info() {
            static app::XAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XAttribute__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XAttribute__Array__Class>(type_info(), "System.Xml.Linq", "XAttribute[]");
        }
        inline app::XAttribute__Array* create() {
            return il2cpp::create_object<app::XAttribute__Array>(get_class());
        }
    } // namespace XAttribute__Array
} // namespace app::classes::types

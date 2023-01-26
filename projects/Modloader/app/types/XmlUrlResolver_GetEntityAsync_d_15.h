#pragma once
#include <Modloader/app/structs/XmlUrlResolver_GetEntityAsync_d_15.h>
#include <Modloader/app/structs/XmlUrlResolver_GetEntityAsync_d_15__Boxed.h>
#include <Modloader/app/structs/XmlUrlResolver_GetEntityAsync_d_15__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlUrlResolver_GetEntityAsync_d_15 {
        inline app::XmlUrlResolver_GetEntityAsync_d_15__Class** type_info() {
            static app::XmlUrlResolver_GetEntityAsync_d_15__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlUrlResolver_GetEntityAsync_d_15__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlUrlResolver_GetEntityAsync_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlUrlResolver_GetEntityAsync_d_15__Class>(type_info(), "System.Xml", "XmlUrlResolver", "<GetEntityAsync>d__15");
        }
        inline app::XmlUrlResolver_GetEntityAsync_d_15* create() {
            return il2cpp::create_object<app::XmlUrlResolver_GetEntityAsync_d_15>(get_class());
        }
        inline app::XmlUrlResolver_GetEntityAsync_d_15__Boxed* box(app::XmlUrlResolver_GetEntityAsync_d_15 value) {
            return il2cpp::box_value<app::XmlUrlResolver_GetEntityAsync_d_15__Boxed>(get_class(), value);
        }
    } // namespace XmlUrlResolver_GetEntityAsync_d_15
} // namespace app::classes::types

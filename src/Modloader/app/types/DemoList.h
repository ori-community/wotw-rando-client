#pragma once
#include <Modloader/app/structs/DemoList.h>
#include <Modloader/app/structs/DemoList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DemoList {
        inline app::DemoList__Class** type_info() {
            static app::DemoList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DemoList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DemoList__Class* get_class() {
            return il2cpp::get_class<app::DemoList__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DemoList");
        }
        inline app::DemoList* create() {
            return il2cpp::create_object<app::DemoList>(get_class());
        }
    } // namespace DemoList
} // namespace app::classes::types

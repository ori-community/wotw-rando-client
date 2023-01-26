#pragma once
#include <Modloader/app/structs/CustomerContent.h>
#include <Modloader/app/structs/CustomerContent__Array.h>
#include <Modloader/app/structs/CustomerContent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomerContent {
        inline app::CustomerContent__Class** type_info() {
            static app::CustomerContent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomerContent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomerContent__Class* get_class() {
            return il2cpp::get_class<app::CustomerContent__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "CustomerContent");
        }
        inline app::CustomerContent* create() {
            return il2cpp::create_object<app::CustomerContent>(get_class());
        }
        inline app::CustomerContent__Array* create_array(int size) {
            return il2cpp::array_new<app::CustomerContent__Array>(get_class(), size);
        }
        inline app::CustomerContent__Array* create_array(const std::vector<app::CustomerContent*>& items) {
            return il2cpp::array_new<app::CustomerContent__Array>(get_class(), items);
        }
    } // namespace CustomerContent
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/App.h>
#include <Modloader/app/structs/App__Array.h>
#include <Modloader/app/structs/App__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace App {
        inline app::App__Class** type_info() {
            static app::App__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::App__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::App__Class* get_class() {
            return il2cpp::get_class<app::App__Class>(type_info(), "Microsoft.Applications.Events.DataModels", "App");
        }
        inline app::App* create() {
            return il2cpp::create_object<app::App>(get_class());
        }
        inline app::App__Array* create_array(int size) {
            return il2cpp::array_new<app::App__Array>(get_class(), size);
        }
        inline app::App__Array* create_array(const std::vector<app::App*>& items) {
            return il2cpp::array_new<app::App__Array>(get_class(), items);
        }
    } // namespace App
} // namespace app::classes::types

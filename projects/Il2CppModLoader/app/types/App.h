#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace App {
        namespace {
            inline app::App__Class* type_info_ref = nullptr;
        }
        inline app::App__Class** type_info = &type_info_ref;
        inline app::App__Class* get_class() {
            return il2cpp::get_class<app::App__Class>(type_info, "Microsoft.Applications.Events.DataModels", "App");
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

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomerContent {
        namespace {
            inline app::CustomerContent__Class* type_info_ref = nullptr;
        }
        inline app::CustomerContent__Class** type_info = &type_info_ref;
        inline app::CustomerContent__Class* get_class() {
            return il2cpp::get_class<app::CustomerContent__Class>(type_info, "Microsoft.Applications.Events.DataModels", "CustomerContent");
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

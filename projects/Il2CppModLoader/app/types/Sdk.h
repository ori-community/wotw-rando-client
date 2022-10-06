#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Sdk {
        namespace {
            app::Sdk__Class* type_info_ref = nullptr;
        }
        app::Sdk__Class** type_info = &type_info_ref;
        inline app::Sdk__Class* get_class() {
            return il2cpp::get_class<app::Sdk__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Sdk");
        }
        inline app::Sdk* create() {
            return il2cpp::create_object<app::Sdk>(get_class());
        }
        inline app::Sdk__Array* create_array(int size) {
            return il2cpp::array_new<app::Sdk__Array>(get_class(), size);
        }
        inline app::Sdk__Array* create_array(const std::vector<app::Sdk*>& items) {
            return il2cpp::array_new<app::Sdk__Array>(get_class(), items);
        }
    } // namespace Sdk
} // namespace app::classes::types
#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SDK {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SDK__Class** type_info;
        inline app::SDK__Class* get_class() {
            return il2cpp::get_class<app::SDK__Class>(type_info, "XGamingRuntime", "SDK");
        }
        inline app::SDK* create() {
            return il2cpp::create_object<app::SDK>(get_class());
        }
    } // namespace SDK
} // namespace app::classes::types

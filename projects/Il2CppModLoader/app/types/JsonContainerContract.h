#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonContainerContract {
        namespace {
            inline app::JsonContainerContract__Class* type_info_ref = nullptr;
        }
        inline app::JsonContainerContract__Class** type_info = &type_info_ref;
        inline app::JsonContainerContract__Class* get_class() {
            return il2cpp::get_class<app::JsonContainerContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonContainerContract");
        }
        inline app::JsonContainerContract* create() {
            return il2cpp::create_object<app::JsonContainerContract>(get_class());
        }
    } // namespace JsonContainerContract
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JToken__Array {
        namespace {
            inline app::JToken__Array__Class* type_info_ref = nullptr;
        }
        inline app::JToken__Array__Class** type_info = &type_info_ref;
        inline app::JToken__Array__Class* get_class() {
            return il2cpp::get_class<app::JToken__Array__Class>(type_info, "Newtonsoft.Json.Linq", "JToken[]");
        }
        inline app::JToken__Array* create() {
            return il2cpp::create_object<app::JToken__Array>(get_class());
        }
    } // namespace JToken__Array
} // namespace app::classes::types

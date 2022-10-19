#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonContract {
        namespace {
            inline app::JsonContract__Class* type_info_ref = nullptr;
        }
        inline app::JsonContract__Class** type_info = &type_info_ref;
        inline app::JsonContract__Class* get_class() {
            return il2cpp::get_class<app::JsonContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonContract");
        }
        inline app::JsonContract* create() {
            return il2cpp::create_object<app::JsonContract>(get_class());
        }
    } // namespace JsonContract
} // namespace app::classes::types

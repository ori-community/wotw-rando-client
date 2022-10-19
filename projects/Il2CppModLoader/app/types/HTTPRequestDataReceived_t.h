#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HTTPRequestDataReceived_t {
        namespace {
            inline app::HTTPRequestDataReceived_t__Class* type_info_ref = nullptr;
        }
        inline app::HTTPRequestDataReceived_t__Class** type_info = &type_info_ref;
        inline app::HTTPRequestDataReceived_t__Class* get_class() {
            return il2cpp::get_class<app::HTTPRequestDataReceived_t__Class>(type_info, "Steamworks", "HTTPRequestDataReceived_t");
        }
        inline app::HTTPRequestDataReceived_t* create() {
            return il2cpp::create_object<app::HTTPRequestDataReceived_t>(get_class());
        }
        inline app::HTTPRequestDataReceived_t__Boxed* box(app::HTTPRequestDataReceived_t value) {
            return il2cpp::box_value<app::HTTPRequestDataReceived_t__Boxed>(get_class(), value);
        }
    } // namespace HTTPRequestDataReceived_t
} // namespace app::classes::types

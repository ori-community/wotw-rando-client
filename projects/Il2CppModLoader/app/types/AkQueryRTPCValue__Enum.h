#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkQueryRTPCValue__Enum {
        namespace {
            inline app::AkQueryRTPCValue__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkQueryRTPCValue__Enum__Class** type_info = &type_info_ref;
        inline app::AkQueryRTPCValue__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkQueryRTPCValue__Enum__Class>(type_info, "", "AkQueryRTPCValue");
        }
        inline app::AkQueryRTPCValue__Enum* create() {
            return il2cpp::create_object<app::AkQueryRTPCValue__Enum>(get_class());
        }
    } // namespace AkQueryRTPCValue__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EUGCQuery__Enum {
        namespace {
            app::EUGCQuery__Enum__Class* type_info_ref = nullptr;
        }
        app::EUGCQuery__Enum__Class** type_info = &type_info_ref;
        inline app::EUGCQuery__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUGCQuery__Enum__Class>(type_info, "Steamworks", "EUGCQuery");
        }
        inline app::EUGCQuery__Enum* create() {
            return il2cpp::create_object<app::EUGCQuery__Enum>(get_class());
        }
    } // namespace EUGCQuery__Enum
} // namespace app::classes::types

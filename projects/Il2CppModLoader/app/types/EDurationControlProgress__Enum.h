#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EDurationControlProgress__Enum {
        namespace {
            app::EDurationControlProgress__Enum__Class* type_info_ref = nullptr;
        }
        app::EDurationControlProgress__Enum__Class** type_info = &type_info_ref;
        inline app::EDurationControlProgress__Enum__Class* get_class() {
            return il2cpp::get_class<app::EDurationControlProgress__Enum__Class>(type_info, "Steamworks", "EDurationControlProgress");
        }
        inline app::EDurationControlProgress__Enum* create() {
            return il2cpp::create_object<app::EDurationControlProgress__Enum>(get_class());
        }
    } // namespace EDurationControlProgress__Enum
} // namespace app::classes::types

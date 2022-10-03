#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAtlasArea__Enum {
        namespace {
            app::UberAtlasArea__Enum__Class* type_info_ref = nullptr;
        }
        app::UberAtlasArea__Enum__Class** type_info = &type_info_ref;
        inline app::UberAtlasArea__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasArea__Enum__Class>(type_info, "", "UberAtlasArea");
        }
        inline app::UberAtlasArea__Enum* create() {
            return il2cpp::create_object<app::UberAtlasArea__Enum>(get_class());
        }
    } // namespace UberAtlasArea__Enum
} // namespace app::classes::types

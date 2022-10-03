#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZDontSaveGroup {
        namespace {
            app::ZDontSaveGroup__Class* type_info_ref = nullptr;
        }
        app::ZDontSaveGroup__Class** type_info = &type_info_ref;
        inline app::ZDontSaveGroup__Class* get_class() {
            return il2cpp::get_class<app::ZDontSaveGroup__Class>(type_info, "", "ZDontSaveGroup");
        }
        inline app::ZDontSaveGroup* create() {
            return il2cpp::create_object<app::ZDontSaveGroup>(get_class());
        }
    } // namespace ZDontSaveGroup
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XCommentWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XCommentWrapper__Class** type_info;
        inline app::XCommentWrapper__Class* get_class() {
            return il2cpp::get_class<app::XCommentWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XCommentWrapper");
        }
        inline app::XCommentWrapper* create() {
            return il2cpp::create_object<app::XCommentWrapper>(get_class());
        }
    } // namespace XCommentWrapper
} // namespace app::classes::types

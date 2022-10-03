#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CommentHandling__Enum {
        namespace {
            app::CommentHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::CommentHandling__Enum__Class** type_info = &type_info_ref;
        inline app::CommentHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::CommentHandling__Enum__Class>(type_info, "Newtonsoft.Json.Linq", "CommentHandling");
        }
        inline app::CommentHandling__Enum* create() {
            return il2cpp::create_object<app::CommentHandling__Enum>(get_class());
        }
    } // namespace CommentHandling__Enum
} // namespace app::classes::types

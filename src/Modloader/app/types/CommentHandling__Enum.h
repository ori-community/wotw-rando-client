#pragma once
#include <Modloader/app/structs/CommentHandling__Enum.h>
#include <Modloader/app/structs/CommentHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommentHandling__Enum {
        inline app::CommentHandling__Enum__Class** type_info() {
            static app::CommentHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CommentHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CommentHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::CommentHandling__Enum__Class>(type_info(), "Newtonsoft.Json.Linq", "CommentHandling");
        }
        inline app::CommentHandling__Enum* create() {
            return il2cpp::create_object<app::CommentHandling__Enum>(get_class());
        }
    } // namespace CommentHandling__Enum
} // namespace app::classes::types

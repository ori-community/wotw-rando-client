#pragma once
#include <Modloader/app/structs/TextureMergeMode__Enum.h>
#include <Modloader/app/structs/TextureMergeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureMergeMode__Enum {
        inline app::TextureMergeMode__Enum__Class** type_info() {
            static app::TextureMergeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureMergeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureMergeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureMergeMode__Enum__Class>(type_info(), "", "TextureMergeMode");
        }
        inline app::TextureMergeMode__Enum* create() {
            return il2cpp::create_object<app::TextureMergeMode__Enum>(get_class());
        }
    } // namespace TextureMergeMode__Enum
} // namespace app::classes::types

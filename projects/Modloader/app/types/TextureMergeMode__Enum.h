#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextureMergeMode__Enum__Class.h>
#include <Modloader/app/structs/TextureMergeMode__Enum.h>

namespace app::classes::types {
    namespace TextureMergeMode__Enum {
        namespace {
            inline app::TextureMergeMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TextureMergeMode__Enum__Class** type_info = &type_info_ref;
        inline app::TextureMergeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureMergeMode__Enum__Class>(type_info, "", "TextureMergeMode");
        }
        inline app::TextureMergeMode__Enum* create() {
            return il2cpp::create_object<app::TextureMergeMode__Enum>(get_class());
        }
    } // namespace TextureMergeMode__Enum
} // namespace app::classes::types

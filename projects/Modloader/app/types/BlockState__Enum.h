#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockState__Enum {
        namespace {
            inline app::BlockState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BlockState__Enum__Class** type_info = &type_info_ref;
        inline app::BlockState__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlockState__Enum__Class>(type_info, "Ionic.Zlib", "BlockState");
        }
        inline app::BlockState__Enum* create() {
            return il2cpp::create_object<app::BlockState__Enum>(get_class());
        }
    } // namespace BlockState__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockType__Enum {
        namespace {
            app::BlockType__Enum__Class* type_info_ref = nullptr;
        }
        app::BlockType__Enum__Class** type_info = &type_info_ref;
        inline app::BlockType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BlockType__Enum__Class>(type_info, "Unity.IO.Compression", "BlockType");
        }
        inline app::BlockType__Enum* create() {
            return il2cpp::create_object<app::BlockType__Enum>(get_class());
        }
    } // namespace BlockType__Enum
} // namespace app::classes::types

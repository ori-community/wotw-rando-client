#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InflateBlocks_InflateBlockMode__Enum {
        namespace {
            app::InflateBlocks_InflateBlockMode__Enum__Class* type_info_ref = nullptr;
        }
        app::InflateBlocks_InflateBlockMode__Enum__Class** type_info = &type_info_ref;
        inline app::InflateBlocks_InflateBlockMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InflateBlocks_InflateBlockMode__Enum__Class>(type_info, "Ionic.Zlib", "InflateBlocks", "InflateBlockMode");
        }
        inline app::InflateBlocks_InflateBlockMode__Enum* create() {
            return il2cpp::create_object<app::InflateBlocks_InflateBlockMode__Enum>(get_class());
        }
    } // namespace InflateBlocks_InflateBlockMode__Enum
} // namespace app::classes::types

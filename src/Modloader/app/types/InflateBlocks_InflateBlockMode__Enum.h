#pragma once
#include <Modloader/app/structs/InflateBlocks_InflateBlockMode__Enum.h>
#include <Modloader/app/structs/InflateBlocks_InflateBlockMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InflateBlocks_InflateBlockMode__Enum {
        inline app::InflateBlocks_InflateBlockMode__Enum__Class** type_info() {
            static app::InflateBlocks_InflateBlockMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InflateBlocks_InflateBlockMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InflateBlocks_InflateBlockMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InflateBlocks_InflateBlockMode__Enum__Class>(type_info(), "Ionic.Zlib", "InflateBlocks", "InflateBlockMode");
        }
        inline app::InflateBlocks_InflateBlockMode__Enum* create() {
            return il2cpp::create_object<app::InflateBlocks_InflateBlockMode__Enum>(get_class());
        }
    } // namespace InflateBlocks_InflateBlockMode__Enum
} // namespace app::classes::types

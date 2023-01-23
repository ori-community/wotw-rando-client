#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InflateBlocks_InflateBlockMode__Enum__Class.h>
#include <Modloader/app/structs/InflateBlocks_InflateBlockMode__Enum.h>

namespace app::classes::types {
    namespace InflateBlocks_InflateBlockMode__Enum {
        namespace {
            inline app::InflateBlocks_InflateBlockMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InflateBlocks_InflateBlockMode__Enum__Class** type_info = &type_info_ref;
        inline app::InflateBlocks_InflateBlockMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InflateBlocks_InflateBlockMode__Enum__Class>(type_info, "Ionic.Zlib", "InflateBlocks", "InflateBlockMode");
        }
        inline app::InflateBlocks_InflateBlockMode__Enum* create() {
            return il2cpp::create_object<app::InflateBlocks_InflateBlockMode__Enum>(get_class());
        }
    } // namespace InflateBlocks_InflateBlockMode__Enum
} // namespace app::classes::types

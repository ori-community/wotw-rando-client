#pragma once
#include <Modloader/app/structs/SeinBashVersionAsset_BashVersion__Enum.h>
#include <Modloader/app/structs/SeinBashVersionAsset_BashVersion__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBashVersionAsset_BashVersion__Enum {
        inline app::SeinBashVersionAsset_BashVersion__Enum__Class** type_info() {
            static app::SeinBashVersionAsset_BashVersion__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBashVersionAsset_BashVersion__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBashVersionAsset_BashVersion__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBashVersionAsset_BashVersion__Enum__Class>(type_info(), "", "SeinBashVersionAsset", "BashVersion");
        }
        inline app::SeinBashVersionAsset_BashVersion__Enum* create() {
            return il2cpp::create_object<app::SeinBashVersionAsset_BashVersion__Enum>(get_class());
        }
    } // namespace SeinBashVersionAsset_BashVersion__Enum
} // namespace app::classes::types

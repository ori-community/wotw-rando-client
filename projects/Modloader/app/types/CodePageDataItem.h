#pragma once
#include <Modloader/app/structs/CodePageDataItem.h>
#include <Modloader/app/structs/CodePageDataItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodePageDataItem {
        inline app::CodePageDataItem__Class** type_info() {
            static app::CodePageDataItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CodePageDataItem__Class**)(modloader::win::memory::resolve_rva(0x04783C40));
            }
            return cache;
        }
        inline app::CodePageDataItem__Class* get_class() {
            return il2cpp::get_class<app::CodePageDataItem__Class>(type_info(), "System.Globalization", "CodePageDataItem");
        }
        inline app::CodePageDataItem* create() {
            return il2cpp::create_object<app::CodePageDataItem>(get_class());
        }
    } // namespace CodePageDataItem
} // namespace app::classes::types

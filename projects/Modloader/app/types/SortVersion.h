#pragma once
#include <Modloader/app/structs/SortVersion.h>
#include <Modloader/app/structs/SortVersion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SortVersion {
        inline app::SortVersion__Class** type_info() {
            static app::SortVersion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SortVersion__Class**)(modloader::win::memory::resolve_rva(0x04736A70));
            }
            return cache;
        }
        inline app::SortVersion__Class* get_class() {
            return il2cpp::get_class<app::SortVersion__Class>(type_info(), "System.Globalization", "SortVersion");
        }
        inline app::SortVersion* create() {
            return il2cpp::create_object<app::SortVersion>(get_class());
        }
    } // namespace SortVersion
} // namespace app::classes::types

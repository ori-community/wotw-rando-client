#pragma once
#include <Modloader/app/structs/DllImportAttribute.h>
#include <Modloader/app/structs/DllImportAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DllImportAttribute {
        inline app::DllImportAttribute__Class** type_info() {
            static app::DllImportAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DllImportAttribute__Class**)(modloader::win::memory::resolve_rva(0x04757528));
            }
            return cache;
        }
        inline app::DllImportAttribute__Class* get_class() {
            return il2cpp::get_class<app::DllImportAttribute__Class>(type_info(), "System.Runtime.InteropServices", "DllImportAttribute");
        }
        inline app::DllImportAttribute* create() {
            return il2cpp::create_object<app::DllImportAttribute>(get_class());
        }
    } // namespace DllImportAttribute
} // namespace app::classes::types

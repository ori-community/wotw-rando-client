#pragma once
#include <Modloader/app/structs/ComImportAttribute.h>
#include <Modloader/app/structs/ComImportAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComImportAttribute {
        inline app::ComImportAttribute__Class** type_info() {
            static app::ComImportAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ComImportAttribute__Class**)(modloader::win::memory::resolve_rva(0x047203C0));
            }
            return cache;
        }
        inline app::ComImportAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComImportAttribute__Class>(type_info(), "System.Runtime.InteropServices", "ComImportAttribute");
        }
        inline app::ComImportAttribute* create() {
            return il2cpp::create_object<app::ComImportAttribute>(get_class());
        }
    } // namespace ComImportAttribute
} // namespace app::classes::types

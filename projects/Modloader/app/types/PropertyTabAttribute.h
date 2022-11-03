#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyTabAttribute {
        inline app::PropertyTabAttribute__Class** type_info = (app::PropertyTabAttribute__Class**)(modloader::win::memory::resolve_rva(0x04736AB8));
        inline app::PropertyTabAttribute__Class* get_class() {
            return il2cpp::get_class<app::PropertyTabAttribute__Class>(type_info, "System.ComponentModel", "PropertyTabAttribute");
        }
        inline app::PropertyTabAttribute* create() {
            return il2cpp::create_object<app::PropertyTabAttribute>(get_class());
        }
    } // namespace PropertyTabAttribute
} // namespace app::classes::types

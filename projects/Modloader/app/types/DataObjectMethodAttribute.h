#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataObjectMethodAttribute {
        inline app::DataObjectMethodAttribute__Class** type_info = (app::DataObjectMethodAttribute__Class**)(modloader::win::memory::resolve_rva(0x047086B0));
        inline app::DataObjectMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectMethodAttribute__Class>(type_info, "System.ComponentModel", "DataObjectMethodAttribute");
        }
        inline app::DataObjectMethodAttribute* create() {
            return il2cpp::create_object<app::DataObjectMethodAttribute>(get_class());
        }
    } // namespace DataObjectMethodAttribute
} // namespace app::classes::types

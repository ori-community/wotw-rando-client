#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XObjectWrapper {
        inline app::XObjectWrapper__Class** type_info = (app::XObjectWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472E138));
        inline app::XObjectWrapper__Class* get_class() {
            return il2cpp::get_class<app::XObjectWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XObjectWrapper");
        }
        inline app::XObjectWrapper* create() {
            return il2cpp::create_object<app::XObjectWrapper>(get_class());
        }
    } // namespace XObjectWrapper
} // namespace app::classes::types

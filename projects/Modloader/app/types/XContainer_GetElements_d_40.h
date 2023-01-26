#pragma once
#include <Modloader/app/structs/XContainer_GetElements_d_40.h>
#include <Modloader/app/structs/XContainer_GetElements_d_40__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XContainer_GetElements_d_40 {
        inline app::XContainer_GetElements_d_40__Class** type_info() {
            static app::XContainer_GetElements_d_40__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XContainer_GetElements_d_40__Class**)(modloader::win::memory::resolve_rva(0x0470F928));
            }
            return cache;
        }
        inline app::XContainer_GetElements_d_40__Class* get_class() {
            return il2cpp::get_nested_class<app::XContainer_GetElements_d_40__Class>(type_info(), "System.Xml.Linq", "XContainer", "<GetElements>d__40");
        }
        inline app::XContainer_GetElements_d_40* create() {
            return il2cpp::create_object<app::XContainer_GetElements_d_40>(get_class());
        }
    } // namespace XContainer_GetElements_d_40
} // namespace app::classes::types

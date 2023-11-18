#pragma once
#include <Modloader/app/structs/XContainer_GetDescendants_d_39.h>
#include <Modloader/app/structs/XContainer_GetDescendants_d_39__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XContainer_GetDescendants_d_39 {
        inline app::XContainer_GetDescendants_d_39__Class** type_info() {
            static app::XContainer_GetDescendants_d_39__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XContainer_GetDescendants_d_39__Class**)(modloader::win::memory::resolve_rva(0x047587A8));
            }
            return cache;
        }
        inline app::XContainer_GetDescendants_d_39__Class* get_class() {
            return il2cpp::get_nested_class<app::XContainer_GetDescendants_d_39__Class>(type_info(), "System.Xml.Linq", "XContainer", "<GetDescendants>d__39");
        }
        inline app::XContainer_GetDescendants_d_39* create() {
            return il2cpp::create_object<app::XContainer_GetDescendants_d_39>(get_class());
        }
    } // namespace XContainer_GetDescendants_d_39
} // namespace app::classes::types

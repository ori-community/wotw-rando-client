#pragma once
#include <Modloader/app/structs/XContainer_Nodes_d_18.h>
#include <Modloader/app/structs/XContainer_Nodes_d_18__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XContainer_Nodes_d_18 {
        inline app::XContainer_Nodes_d_18__Class** type_info() {
            static app::XContainer_Nodes_d_18__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XContainer_Nodes_d_18__Class**)(modloader::win::memory::resolve_rva(0x047547D8));
            }
            return cache;
        }
        inline app::XContainer_Nodes_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::XContainer_Nodes_d_18__Class>(type_info(), "System.Xml.Linq", "XContainer", "<Nodes>d__18");
        }
        inline app::XContainer_Nodes_d_18* create() {
            return il2cpp::create_object<app::XContainer_Nodes_d_18>(get_class());
        }
    } // namespace XContainer_Nodes_d_18
} // namespace app::classes::types

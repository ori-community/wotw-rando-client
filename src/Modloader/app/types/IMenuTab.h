#pragma once
#include <Modloader/app/structs/IMenuTab.h>
#include <Modloader/app/structs/IMenuTab__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMenuTab {
        inline app::IMenuTab__Class** type_info() {
            static app::IMenuTab__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMenuTab__Class**)(modloader::win::memory::resolve_rva(0x04755B08));
            }
            return cache;
        }
        inline app::IMenuTab__Class* get_class() {
            return il2cpp::get_class<app::IMenuTab__Class>(type_info(), "", "IMenuTab");
        }
    } // namespace IMenuTab
} // namespace app::classes::types

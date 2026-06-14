#pragma once
#include <Modloader/app/structs/RemotingSurrogateSelector.h>
#include <Modloader/app/structs/RemotingSurrogateSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemotingSurrogateSelector {
        inline app::RemotingSurrogateSelector__Class** type_info() {
            static app::RemotingSurrogateSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemotingSurrogateSelector__Class**)(modloader::win::memory::resolve_rva(0x0475B840));
            }
            return cache;
        }
        inline app::RemotingSurrogateSelector__Class* get_class() {
            return il2cpp::get_class<app::RemotingSurrogateSelector__Class>(type_info(), "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector");
        }
        inline app::RemotingSurrogateSelector* create() {
            return il2cpp::create_object<app::RemotingSurrogateSelector>(get_class());
        }
    } // namespace RemotingSurrogateSelector
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/ISurrogateSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISurrogateSelector {
        inline app::ISurrogateSelector__Class** type_info() {
            static app::ISurrogateSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISurrogateSelector__Class**)(modloader::win::memory::resolve_rva(0x0472E058));
            }
            return cache;
        }
        inline app::ISurrogateSelector__Class* get_class() {
            return il2cpp::get_class<app::ISurrogateSelector__Class>(type_info(), "System.Runtime.Serialization", "ISurrogateSelector");
        }
    } // namespace ISurrogateSelector
} // namespace app::classes::types

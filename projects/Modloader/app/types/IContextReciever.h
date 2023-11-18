#pragma once
#include <Modloader/app/structs/IContextReciever.h>
#include <Modloader/app/structs/IContextReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContextReciever {
        inline app::IContextReciever__Class** type_info() {
            static app::IContextReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContextReciever__Class**)(modloader::win::memory::resolve_rva(0x0473B270));
            }
            return cache;
        }
        inline app::IContextReciever__Class* get_class() {
            return il2cpp::get_class<app::IContextReciever__Class>(type_info(), "", "IContextReciever");
        }
    } // namespace IContextReciever
} // namespace app::classes::types

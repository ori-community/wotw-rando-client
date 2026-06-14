#pragma once
#include <Modloader/app/structs/IKillReciever.h>
#include <Modloader/app/structs/IKillReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKillReciever {
        inline app::IKillReciever__Class** type_info() {
            static app::IKillReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKillReciever__Class**)(modloader::win::memory::resolve_rva(0x04704E10));
            }
            return cache;
        }
        inline app::IKillReciever__Class* get_class() {
            return il2cpp::get_class<app::IKillReciever__Class>(type_info(), "", "IKillReciever");
        }
    } // namespace IKillReciever
} // namespace app::classes::types

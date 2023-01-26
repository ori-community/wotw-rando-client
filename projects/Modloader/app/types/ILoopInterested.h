#pragma once
#include <Modloader/app/structs/ILoopInterested.h>
#include <Modloader/app/structs/ILoopInterested__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILoopInterested {
        inline app::ILoopInterested__Class** type_info() {
            static app::ILoopInterested__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILoopInterested__Class**)(modloader::win::memory::resolve_rva(0x0474B578));
            }
            return cache;
        }
        inline app::ILoopInterested__Class* get_class() {
            return il2cpp::get_class<app::ILoopInterested__Class>(type_info(), "Moon.Timeline", "ILoopInterested");
        }
    } // namespace ILoopInterested
} // namespace app::classes::types

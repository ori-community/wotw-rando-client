#pragma once
#include <Modloader/app/structs/ITransitionOwner.h>
#include <Modloader/app/structs/ITransitionOwner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITransitionOwner {
        inline app::ITransitionOwner__Class** type_info() {
            static app::ITransitionOwner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITransitionOwner__Class**)(modloader::win::memory::resolve_rva(0x04759680));
            }
            return cache;
        }
        inline app::ITransitionOwner__Class* get_class() {
            return il2cpp::get_class<app::ITransitionOwner__Class>(type_info(), "Moon", "ITransitionOwner");
        }
    } // namespace ITransitionOwner
} // namespace app::classes::types

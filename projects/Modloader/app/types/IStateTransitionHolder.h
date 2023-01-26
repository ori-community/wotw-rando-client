#pragma once
#include <Modloader/app/structs/IStateTransitionHolder.h>
#include <Modloader/app/structs/IStateTransitionHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStateTransitionHolder {
        inline app::IStateTransitionHolder__Class** type_info() {
            static app::IStateTransitionHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStateTransitionHolder__Class**)(modloader::win::memory::resolve_rva(0x0472FAF8));
            }
            return cache;
        }
        inline app::IStateTransitionHolder__Class* get_class() {
            return il2cpp::get_class<app::IStateTransitionHolder__Class>(type_info(), "", "IStateTransitionHolder");
        }
    } // namespace IStateTransitionHolder
} // namespace app::classes::types

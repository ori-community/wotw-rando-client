#pragma once
#include <Modloader/app/structs/ITorchAttackable.h>
#include <Modloader/app/structs/ITorchAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITorchAttackable {
        inline app::ITorchAttackable__Class** type_info() {
            static app::ITorchAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITorchAttackable__Class**)(modloader::win::memory::resolve_rva(0x0471E0E8));
            }
            return cache;
        }
        inline app::ITorchAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITorchAttackable__Class>(type_info(), "", "ITorchAttackable");
        }
    } // namespace ITorchAttackable
} // namespace app::classes::types

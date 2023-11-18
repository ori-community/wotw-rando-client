#pragma once
#include <Modloader/app/structs/ITrapAttackable.h>
#include <Modloader/app/structs/ITrapAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITrapAttackable {
        inline app::ITrapAttackable__Class** type_info() {
            static app::ITrapAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITrapAttackable__Class**)(modloader::win::memory::resolve_rva(0x04796AB0));
            }
            return cache;
        }
        inline app::ITrapAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITrapAttackable__Class>(type_info(), "", "ITrapAttackable");
        }
    } // namespace ITrapAttackable
} // namespace app::classes::types

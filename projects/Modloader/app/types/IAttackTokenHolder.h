#pragma once
#include <Modloader/app/structs/IAttackTokenHolder.h>
#include <Modloader/app/structs/IAttackTokenHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAttackTokenHolder {
        inline app::IAttackTokenHolder__Class** type_info() {
            static app::IAttackTokenHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAttackTokenHolder__Class**)(modloader::win::memory::resolve_rva(0x0472A448));
            }
            return cache;
        }
        inline app::IAttackTokenHolder__Class* get_class() {
            return il2cpp::get_class<app::IAttackTokenHolder__Class>(type_info(), "", "IAttackTokenHolder");
        }
    } // namespace IAttackTokenHolder
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAttackTokenHolder__Class.h>

namespace app::classes::types {
    namespace IAttackTokenHolder {
        inline app::IAttackTokenHolder__Class** type_info = (app::IAttackTokenHolder__Class**)(modloader::win::memory::resolve_rva(0x0472A448));
        inline app::IAttackTokenHolder__Class* get_class() {
            return il2cpp::get_class<app::IAttackTokenHolder__Class>(type_info, "", "IAttackTokenHolder");
        }
    } // namespace IAttackTokenHolder
} // namespace app::classes::types

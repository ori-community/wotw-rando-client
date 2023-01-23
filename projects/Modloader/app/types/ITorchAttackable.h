#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITorchAttackable__Class.h>

namespace app::classes::types {
    namespace ITorchAttackable {
        inline app::ITorchAttackable__Class** type_info = (app::ITorchAttackable__Class**)(modloader::win::memory::resolve_rva(0x0471E0E8));
        inline app::ITorchAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITorchAttackable__Class>(type_info, "", "ITorchAttackable");
        }
    } // namespace ITorchAttackable
} // namespace app::classes::types

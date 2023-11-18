#pragma once
#include <Modloader/app/structs/IEquipableOwner.h>
#include <Modloader/app/structs/IEquipableOwner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEquipableOwner {
        inline app::IEquipableOwner__Class** type_info() {
            static app::IEquipableOwner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEquipableOwner__Class**)(modloader::win::memory::resolve_rva(0x04705E10));
            }
            return cache;
        }
        inline app::IEquipableOwner__Class* get_class() {
            return il2cpp::get_class<app::IEquipableOwner__Class>(type_info(), "", "IEquipableOwner");
        }
    } // namespace IEquipableOwner
} // namespace app::classes::types

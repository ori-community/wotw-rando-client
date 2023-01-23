#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritLeashComboMove__Class.h>
#include <Modloader/app/structs/SpiritLeashComboMove.h>

namespace app::classes::types {
    namespace SpiritLeashComboMove {
        namespace {
            inline app::SpiritLeashComboMove__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLeashComboMove__Class** type_info = &type_info_ref;
        inline app::SpiritLeashComboMove__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashComboMove__Class>(type_info, "Moon.ComboSystem", "SpiritLeashComboMove");
        }
        inline app::SpiritLeashComboMove* create() {
            return il2cpp::create_object<app::SpiritLeashComboMove>(get_class());
        }
    } // namespace SpiritLeashComboMove
} // namespace app::classes::types

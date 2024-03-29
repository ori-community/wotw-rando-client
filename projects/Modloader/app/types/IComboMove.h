#pragma once
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/IComboMove__Array.h>
#include <Modloader/app/structs/IComboMove__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComboMove {
        inline app::IComboMove__Class** type_info() {
            static app::IComboMove__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IComboMove__Class**)(modloader::win::memory::resolve_rva(0x0473B090));
            }
            return cache;
        }
        inline app::IComboMove__Class* get_class() {
            return il2cpp::get_class<app::IComboMove__Class>(type_info(), "Moon.ComboSystem", "IComboMove");
        }
        inline app::IComboMove__Array* create_array(int size) {
            return il2cpp::array_new<app::IComboMove__Array>(get_class(), size);
        }
        inline app::IComboMove__Array* create_array(const std::vector<app::IComboMove*>& items) {
            return il2cpp::array_new<app::IComboMove__Array>(get_class(), items);
        }
    } // namespace IComboMove
} // namespace app::classes::types

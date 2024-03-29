#pragma once
#include <Modloader/app/structs/PhysicalSystemState.h>
#include <Modloader/app/structs/PhysicalSystemState__Array.h>
#include <Modloader/app/structs/PhysicalSystemState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemState {
        inline app::PhysicalSystemState__Class** type_info() {
            static app::PhysicalSystemState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicalSystemState__Class**)(modloader::win::memory::resolve_rva(0x0478B888));
            }
            return cache;
        }
        inline app::PhysicalSystemState__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemState__Class>(type_info(), "", "PhysicalSystemState");
        }
        inline app::PhysicalSystemState* create() {
            return il2cpp::create_object<app::PhysicalSystemState>(get_class());
        }
        inline app::PhysicalSystemState__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicalSystemState__Array>(get_class(), size);
        }
        inline app::PhysicalSystemState__Array* create_array(const std::vector<app::PhysicalSystemState*>& items) {
            return il2cpp::array_new<app::PhysicalSystemState__Array>(get_class(), items);
        }
    } // namespace PhysicalSystemState
} // namespace app::classes::types

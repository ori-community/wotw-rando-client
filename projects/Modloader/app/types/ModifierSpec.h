#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ModifierSpec__Class.h>
#include <Modloader/app/structs/ModifierSpec__Array.h>
#include <Modloader/app/structs/ModifierSpec.h>

namespace app::classes::types {
    namespace ModifierSpec {
        inline app::ModifierSpec__Class** type_info = (app::ModifierSpec__Class**)(modloader::win::memory::resolve_rva(0x04799308));
        inline app::ModifierSpec__Class* get_class() {
            return il2cpp::get_class<app::ModifierSpec__Class>(type_info, "System", "ModifierSpec");
        }
        inline app::ModifierSpec__Array* create_array(int size) {
            return il2cpp::array_new<app::ModifierSpec__Array>(get_class(), size);
        }
        inline app::ModifierSpec__Array* create_array(const std::vector<app::ModifierSpec*>& items) {
            return il2cpp::array_new<app::ModifierSpec__Array>(get_class(), items);
        }
    } // namespace ModifierSpec
} // namespace app::classes::types

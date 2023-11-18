#pragma once
#include <Modloader/app/structs/IDrivableGroup.h>
#include <Modloader/app/structs/IDrivableGroup__Array.h>
#include <Modloader/app/structs/IDrivableGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDrivableGroup {
        inline app::IDrivableGroup__Class** type_info() {
            static app::IDrivableGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDrivableGroup__Class**)(modloader::win::memory::resolve_rva(0x04787350));
            }
            return cache;
        }
        inline app::IDrivableGroup__Class* get_class() {
            return il2cpp::get_class<app::IDrivableGroup__Class>(type_info(), "Moon", "IDrivableGroup");
        }
        inline app::IDrivableGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::IDrivableGroup__Array>(get_class(), size);
        }
        inline app::IDrivableGroup__Array* create_array(const std::vector<app::IDrivableGroup*>& items) {
            return il2cpp::array_new<app::IDrivableGroup__Array>(get_class(), items);
        }
    } // namespace IDrivableGroup
} // namespace app::classes::types

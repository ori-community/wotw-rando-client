#pragma once
#include <Modloader/app/structs/StateOverrideSystem_IStateOverrideEntry.h>
#include <Modloader/app/structs/StateOverrideSystem_IStateOverrideEntry__Array.h>
#include <Modloader/app/structs/StateOverrideSystem_IStateOverrideEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateOverrideSystem_IStateOverrideEntry {
        inline app::StateOverrideSystem_IStateOverrideEntry__Class** type_info() {
            static app::StateOverrideSystem_IStateOverrideEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateOverrideSystem_IStateOverrideEntry__Class**)(modloader::win::memory::resolve_rva(0x04786E40));
            }
            return cache;
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StateOverrideSystem_IStateOverrideEntry__Class>(type_info(), "", "StateOverrideSystem", "IStateOverrideEntry");
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StateOverrideSystem_IStateOverrideEntry__Array>(get_class(), size);
        }
        inline app::StateOverrideSystem_IStateOverrideEntry__Array* create_array(const std::vector<app::StateOverrideSystem_IStateOverrideEntry*>& items) {
            return il2cpp::array_new<app::StateOverrideSystem_IStateOverrideEntry__Array>(get_class(), items);
        }
    } // namespace StateOverrideSystem_IStateOverrideEntry
} // namespace app::classes::types

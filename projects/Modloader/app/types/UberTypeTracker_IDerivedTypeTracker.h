#pragma once
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker.h>
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker__Array.h>
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTypeTracker_IDerivedTypeTracker {
        inline app::UberTypeTracker_IDerivedTypeTracker__Class** type_info() {
            static app::UberTypeTracker_IDerivedTypeTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberTypeTracker_IDerivedTypeTracker__Class**)(modloader::win::memory::resolve_rva(0x0470A5D0));
            }
            return cache;
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Class* get_class() {
            return il2cpp::get_nested_class<app::UberTypeTracker_IDerivedTypeTracker__Class>(type_info(), "", "UberTypeTracker", "IDerivedTypeTracker");
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Array* create_array(int size) {
            return il2cpp::array_new<app::UberTypeTracker_IDerivedTypeTracker__Array>(get_class(), size);
        }
        inline app::UberTypeTracker_IDerivedTypeTracker__Array* create_array(const std::vector<app::UberTypeTracker_IDerivedTypeTracker*>& items) {
            return il2cpp::array_new<app::UberTypeTracker_IDerivedTypeTracker__Array>(get_class(), items);
        }
    } // namespace UberTypeTracker_IDerivedTypeTracker
} // namespace app::classes::types

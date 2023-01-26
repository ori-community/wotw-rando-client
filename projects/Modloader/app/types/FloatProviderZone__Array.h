#pragma once
#include <Modloader/app/structs/FloatProviderZone__Array.h>
#include <Modloader/app/structs/FloatProviderZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatProviderZone__Array {
        inline app::FloatProviderZone__Array__Class** type_info() {
            static app::FloatProviderZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FloatProviderZone__Array__Class**)(modloader::win::memory::resolve_rva(0x047391C0));
            }
            return cache;
        }
        inline app::FloatProviderZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatProviderZone__Array__Class>(type_info(), "", "FloatProviderZone[]");
        }
        inline app::FloatProviderZone__Array* create() {
            return il2cpp::create_object<app::FloatProviderZone__Array>(get_class());
        }
    } // namespace FloatProviderZone__Array
} // namespace app::classes::types

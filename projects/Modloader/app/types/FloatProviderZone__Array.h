#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatProviderZone__Array__Class.h>
#include <Modloader/app/structs/FloatProviderZone__Array.h>

namespace app::classes::types {
    namespace FloatProviderZone__Array {
        inline app::FloatProviderZone__Array__Class** type_info = (app::FloatProviderZone__Array__Class**)(modloader::win::memory::resolve_rva(0x047391C0));
        inline app::FloatProviderZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatProviderZone__Array__Class>(type_info, "", "FloatProviderZone[]");
        }
        inline app::FloatProviderZone__Array* create() {
            return il2cpp::create_object<app::FloatProviderZone__Array>(get_class());
        }
    } // namespace FloatProviderZone__Array
} // namespace app::classes::types

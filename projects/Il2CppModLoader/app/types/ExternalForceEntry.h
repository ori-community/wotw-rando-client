#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExternalForceEntry {
        inline app::ExternalForceEntry__Class** type_info = (app::ExternalForceEntry__Class**)(modloader::win::memory::resolve_rva(0x0476CD30));
        inline app::ExternalForceEntry__Class* get_class() {
            return il2cpp::get_class<app::ExternalForceEntry__Class>(type_info, "", "ExternalForceEntry");
        }
        inline app::ExternalForceEntry* create() {
            return il2cpp::create_object<app::ExternalForceEntry>(get_class());
        }
        inline app::ExternalForceEntry__Boxed* box(app::ExternalForceEntry value) {
            return il2cpp::box_value<app::ExternalForceEntry__Boxed>(get_class(), value);
        }
        inline app::ExternalForceEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::ExternalForceEntry__Array>(get_class(), size);
        }
        inline app::ExternalForceEntry__Array* create_array(const std::vector<app::ExternalForceEntry>& items) {
            return il2cpp::array_new<app::ExternalForceEntry__Array>(get_class(), items);
        }
    } // namespace ExternalForceEntry
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcidSlugEnemy_States {
        inline app::AcidSlugEnemy_States__Class** type_info = (app::AcidSlugEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04734E40));
        inline app::AcidSlugEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::AcidSlugEnemy_States__Class>(type_info, "", "AcidSlugEnemy", "States");
        }
        inline app::AcidSlugEnemy_States* create() {
            return il2cpp::create_object<app::AcidSlugEnemy_States>(get_class());
        }
    } // namespace AcidSlugEnemy_States
} // namespace app::classes::types

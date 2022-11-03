#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrainEntity {
        namespace {
            inline app::BrainEntity__Class* type_info_ref = nullptr;
        }
        inline app::BrainEntity__Class** type_info = &type_info_ref;
        inline app::BrainEntity__Class* get_class() {
            return il2cpp::get_class<app::BrainEntity__Class>(type_info, "Moon", "BrainEntity");
        }
        inline app::BrainEntity* create() {
            return il2cpp::create_object<app::BrainEntity>(get_class());
        }
    } // namespace BrainEntity
} // namespace app::classes::types

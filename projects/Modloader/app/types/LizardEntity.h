#pragma once
#include <Modloader/app/structs/LizardEntity.h>
#include <Modloader/app/structs/LizardEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardEntity {
        inline app::LizardEntity__Class** type_info() {
            static app::LizardEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LizardEntity__Class**)(modloader::win::memory::resolve_rva(0x0477BD20));
            }
            return cache;
        }
        inline app::LizardEntity__Class* get_class() {
            return il2cpp::get_class<app::LizardEntity__Class>(type_info(), "", "LizardEntity");
        }
        inline app::LizardEntity* create() {
            return il2cpp::create_object<app::LizardEntity>(get_class());
        }
    } // namespace LizardEntity
} // namespace app::classes::types

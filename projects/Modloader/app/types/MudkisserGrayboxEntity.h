#pragma once
#include <Modloader/app/structs/MudkisserGrayboxEntity.h>
#include <Modloader/app/structs/MudkisserGrayboxEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserGrayboxEntity {
        inline app::MudkisserGrayboxEntity__Class** type_info() {
            static app::MudkisserGrayboxEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MudkisserGrayboxEntity__Class**)(modloader::win::memory::resolve_rva(0x04786648));
            }
            return cache;
        }
        inline app::MudkisserGrayboxEntity__Class* get_class() {
            return il2cpp::get_class<app::MudkisserGrayboxEntity__Class>(type_info(), "", "MudkisserGrayboxEntity");
        }
        inline app::MudkisserGrayboxEntity* create() {
            return il2cpp::create_object<app::MudkisserGrayboxEntity>(get_class());
        }
    } // namespace MudkisserGrayboxEntity
} // namespace app::classes::types

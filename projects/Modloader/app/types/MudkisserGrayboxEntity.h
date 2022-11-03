#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MudkisserGrayboxEntity {
        inline app::MudkisserGrayboxEntity__Class** type_info = (app::MudkisserGrayboxEntity__Class**)(modloader::win::memory::resolve_rva(0x04786648));
        inline app::MudkisserGrayboxEntity__Class* get_class() {
            return il2cpp::get_class<app::MudkisserGrayboxEntity__Class>(type_info, "", "MudkisserGrayboxEntity");
        }
        inline app::MudkisserGrayboxEntity* create() {
            return il2cpp::create_object<app::MudkisserGrayboxEntity>(get_class());
        }
    } // namespace MudkisserGrayboxEntity
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GardenerEntity__Class.h>
#include <Modloader/app/structs/GardenerEntity.h>

namespace app::classes::types {
    namespace GardenerEntity {
        inline app::GardenerEntity__Class** type_info = (app::GardenerEntity__Class**)(modloader::win::memory::resolve_rva(0x0475A918));
        inline app::GardenerEntity__Class* get_class() {
            return il2cpp::get_class<app::GardenerEntity__Class>(type_info, "", "GardenerEntity");
        }
        inline app::GardenerEntity* create() {
            return il2cpp::create_object<app::GardenerEntity>(get_class());
        }
    } // namespace GardenerEntity
} // namespace app::classes::types

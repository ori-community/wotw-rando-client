#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MantisGrayboxEntity {
        inline app::MantisGrayboxEntity__Class** type_info = (app::MantisGrayboxEntity__Class**)(modloader::win::memory::resolve_rva(0x04702518));
        inline app::MantisGrayboxEntity__Class* get_class() {
            return il2cpp::get_class<app::MantisGrayboxEntity__Class>(type_info, "", "MantisGrayboxEntity");
        }
        inline app::MantisGrayboxEntity* create() {
            return il2cpp::create_object<app::MantisGrayboxEntity>(get_class());
        }
    } // namespace MantisGrayboxEntity
} // namespace app::classes::types

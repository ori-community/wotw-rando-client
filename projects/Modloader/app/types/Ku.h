#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ku {
        inline app::Ku__Class** type_info = (app::Ku__Class**)(modloader::win::memory::resolve_rva(0x04755AF8));
        inline app::Ku__Class* get_class() {
            return il2cpp::get_class<app::Ku__Class>(type_info, "", "Ku");
        }
        inline app::Ku* create() {
            return il2cpp::create_object<app::Ku>(get_class());
        }
    } // namespace Ku
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Frapser__Class.h>
#include <Modloader/app/structs/Frapser.h>

namespace app::classes::types {
    namespace Frapser {
        inline app::Frapser__Class** type_info = (app::Frapser__Class**)(modloader::win::memory::resolve_rva(0x04759968));
        inline app::Frapser__Class* get_class() {
            return il2cpp::get_class<app::Frapser__Class>(type_info, "", "Frapser");
        }
        inline app::Frapser* create() {
            return il2cpp::create_object<app::Frapser>(get_class());
        }
    } // namespace Frapser
} // namespace app::classes::types

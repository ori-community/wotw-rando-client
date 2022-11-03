#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateException {
        inline app::UberStateException__Class** type_info = (app::UberStateException__Class**)(modloader::win::memory::resolve_rva(0x047546F8));
        inline app::UberStateException__Class* get_class() {
            return il2cpp::get_class<app::UberStateException__Class>(type_info, "Moon", "UberStateException");
        }
        inline app::UberStateException* create() {
            return il2cpp::create_object<app::UberStateException>(get_class());
        }
    } // namespace UberStateException
} // namespace app::classes::types

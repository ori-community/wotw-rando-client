#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpringContext {
        inline app::SpringContext__Class** type_info = (app::SpringContext__Class**)(modloader::win::memory::resolve_rva(0x04714AE0));
        inline app::SpringContext__Class* get_class() {
            return il2cpp::get_class<app::SpringContext__Class>(type_info, "", "SpringContext");
        }
        inline app::SpringContext* create() {
            return il2cpp::create_object<app::SpringContext>(get_class());
        }
        inline app::SpringContext__Boxed* box(app::SpringContext value) {
            return il2cpp::box_value<app::SpringContext__Boxed>(get_class(), value);
        }
    } // namespace SpringContext
} // namespace app::classes::types

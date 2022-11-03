#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageResultContext {
        inline app::DamageResultContext__Class** type_info = (app::DamageResultContext__Class**)(modloader::win::memory::resolve_rva(0x04705EB8));
        inline app::DamageResultContext__Class* get_class() {
            return il2cpp::get_class<app::DamageResultContext__Class>(type_info, "", "DamageResultContext");
        }
        inline app::DamageResultContext* create() {
            return il2cpp::create_object<app::DamageResultContext>(get_class());
        }
        inline app::DamageResultContext__Boxed* box(app::DamageResultContext value) {
            return il2cpp::box_value<app::DamageResultContext__Boxed>(get_class(), value);
        }
    } // namespace DamageResultContext
} // namespace app::classes::types

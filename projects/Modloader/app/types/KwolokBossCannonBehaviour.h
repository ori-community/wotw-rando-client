#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossCannonBehaviour {
        inline app::KwolokBossCannonBehaviour__Class** type_info = (app::KwolokBossCannonBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04713708));
        inline app::KwolokBossCannonBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCannonBehaviour__Class>(type_info, "", "KwolokBossCannonBehaviour");
        }
        inline app::KwolokBossCannonBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossCannonBehaviour>(get_class());
        }
    } // namespace KwolokBossCannonBehaviour
} // namespace app::classes::types

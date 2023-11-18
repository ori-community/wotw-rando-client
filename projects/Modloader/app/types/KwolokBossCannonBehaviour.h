#pragma once
#include <Modloader/app/structs/KwolokBossCannonBehaviour.h>
#include <Modloader/app/structs/KwolokBossCannonBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCannonBehaviour {
        inline app::KwolokBossCannonBehaviour__Class** type_info() {
            static app::KwolokBossCannonBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossCannonBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04713708));
            }
            return cache;
        }
        inline app::KwolokBossCannonBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCannonBehaviour__Class>(type_info(), "", "KwolokBossCannonBehaviour");
        }
        inline app::KwolokBossCannonBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossCannonBehaviour>(get_class());
        }
    } // namespace KwolokBossCannonBehaviour
} // namespace app::classes::types

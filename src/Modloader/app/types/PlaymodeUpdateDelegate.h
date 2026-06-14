#pragma once
#include <Modloader/app/structs/PlaymodeUpdateDelegate.h>
#include <Modloader/app/structs/PlaymodeUpdateDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaymodeUpdateDelegate {
        inline app::PlaymodeUpdateDelegate__Class** type_info() {
            static app::PlaymodeUpdateDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlaymodeUpdateDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472CE48));
            }
            return cache;
        }
        inline app::PlaymodeUpdateDelegate__Class* get_class() {
            return il2cpp::get_class<app::PlaymodeUpdateDelegate__Class>(type_info(), "", "PlaymodeUpdateDelegate");
        }
        inline app::PlaymodeUpdateDelegate* create() {
            return il2cpp::create_object<app::PlaymodeUpdateDelegate>(get_class());
        }
    } // namespace PlaymodeUpdateDelegate
} // namespace app::classes::types

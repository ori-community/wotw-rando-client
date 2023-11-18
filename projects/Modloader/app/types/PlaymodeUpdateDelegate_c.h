#pragma once
#include <Modloader/app/structs/PlaymodeUpdateDelegate_c.h>
#include <Modloader/app/structs/PlaymodeUpdateDelegate_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaymodeUpdateDelegate_c {
        inline app::PlaymodeUpdateDelegate_c__Class** type_info() {
            static app::PlaymodeUpdateDelegate_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlaymodeUpdateDelegate_c__Class**)(modloader::win::memory::resolve_rva(0x0471CA20));
            }
            return cache;
        }
        inline app::PlaymodeUpdateDelegate_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlaymodeUpdateDelegate_c__Class>(type_info(), "", "PlaymodeUpdateDelegate", "<>c");
        }
        inline app::PlaymodeUpdateDelegate_c* create() {
            return il2cpp::create_object<app::PlaymodeUpdateDelegate_c>(get_class());
        }
    } // namespace PlaymodeUpdateDelegate_c
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/KamikazeJumperPlaceholder.h>
#include <Modloader/app/structs/KamikazeJumperPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeJumperPlaceholder {
        inline app::KamikazeJumperPlaceholder__Class** type_info() {
            static app::KamikazeJumperPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeJumperPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeJumperPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperPlaceholder__Class>(type_info(), "", "KamikazeJumperPlaceholder");
        }
        inline app::KamikazeJumperPlaceholder* create() {
            return il2cpp::create_object<app::KamikazeJumperPlaceholder>(get_class());
        }
    } // namespace KamikazeJumperPlaceholder
} // namespace app::classes::types

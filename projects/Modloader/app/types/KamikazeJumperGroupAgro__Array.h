#pragma once
#include <Modloader/app/structs/KamikazeJumperGroupAgro__Array.h>
#include <Modloader/app/structs/KamikazeJumperGroupAgro__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeJumperGroupAgro__Array {
        inline app::KamikazeJumperGroupAgro__Array__Class** type_info() {
            static app::KamikazeJumperGroupAgro__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeJumperGroupAgro__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeJumperGroupAgro__Array__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperGroupAgro__Array__Class>(type_info(), "", "KamikazeJumperGroupAgro[]");
        }
        inline app::KamikazeJumperGroupAgro__Array* create() {
            return il2cpp::create_object<app::KamikazeJumperGroupAgro__Array>(get_class());
        }
    } // namespace KamikazeJumperGroupAgro__Array
} // namespace app::classes::types

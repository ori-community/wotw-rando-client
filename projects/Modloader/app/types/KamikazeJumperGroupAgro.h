#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KamikazeJumperGroupAgro__Class.h>
#include <Modloader/app/structs/KamikazeJumperGroupAgro.h>
#include <Modloader/app/structs/KamikazeJumperGroupAgro__Array.h>

namespace app::classes::types {
    namespace KamikazeJumperGroupAgro {
        inline app::KamikazeJumperGroupAgro__Class** type_info = (app::KamikazeJumperGroupAgro__Class**)(modloader::win::memory::resolve_rva(0x04733B00));
        inline app::KamikazeJumperGroupAgro__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperGroupAgro__Class>(type_info, "", "KamikazeJumperGroupAgro");
        }
        inline app::KamikazeJumperGroupAgro* create() {
            return il2cpp::create_object<app::KamikazeJumperGroupAgro>(get_class());
        }
        inline app::KamikazeJumperGroupAgro__Array* create_array(int size) {
            return il2cpp::array_new<app::KamikazeJumperGroupAgro__Array>(get_class(), size);
        }
        inline app::KamikazeJumperGroupAgro__Array* create_array(const std::vector<app::KamikazeJumperGroupAgro*>& items) {
            return il2cpp::array_new<app::KamikazeJumperGroupAgro__Array>(get_class(), items);
        }
    } // namespace KamikazeJumperGroupAgro
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeJumperGroupAgro__Array {
        namespace {
            inline app::KamikazeJumperGroupAgro__Array__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeJumperGroupAgro__Array__Class** type_info = &type_info_ref;
        inline app::KamikazeJumperGroupAgro__Array__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperGroupAgro__Array__Class>(type_info, "", "KamikazeJumperGroupAgro[]");
        }
        inline app::KamikazeJumperGroupAgro__Array* create() {
            return il2cpp::create_object<app::KamikazeJumperGroupAgro__Array>(get_class());
        }
    } // namespace KamikazeJumperGroupAgro__Array
} // namespace app::classes::types

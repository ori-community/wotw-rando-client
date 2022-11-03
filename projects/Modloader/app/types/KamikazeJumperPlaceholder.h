#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeJumperPlaceholder {
        namespace {
            inline app::KamikazeJumperPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeJumperPlaceholder__Class** type_info = &type_info_ref;
        inline app::KamikazeJumperPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperPlaceholder__Class>(type_info, "", "KamikazeJumperPlaceholder");
        }
        inline app::KamikazeJumperPlaceholder* create() {
            return il2cpp::create_object<app::KamikazeJumperPlaceholder>(get_class());
        }
    } // namespace KamikazeJumperPlaceholder
} // namespace app::classes::types

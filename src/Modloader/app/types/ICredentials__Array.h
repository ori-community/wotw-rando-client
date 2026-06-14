#pragma once
#include <Modloader/app/structs/ICredentials__Array.h>
#include <Modloader/app/structs/ICredentials__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICredentials__Array {
        inline app::ICredentials__Array__Class** type_info() {
            static app::ICredentials__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICredentials__Array__Class**)(modloader::win::memory::resolve_rva(0x0477BC50));
            }
            return cache;
        }
        inline app::ICredentials__Array__Class* get_class() {
            return il2cpp::get_class<app::ICredentials__Array__Class>(type_info(), "System.Net", "ICredentials[]");
        }
        inline app::ICredentials__Array* create() {
            return il2cpp::create_object<app::ICredentials__Array>(get_class());
        }
    } // namespace ICredentials__Array
} // namespace app::classes::types

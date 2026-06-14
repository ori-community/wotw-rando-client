#pragma once
#include <Modloader/app/structs/InternalFE.h>
#include <Modloader/app/structs/InternalFE__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalFE {
        inline app::InternalFE__Class** type_info() {
            static app::InternalFE__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalFE__Class**)(modloader::win::memory::resolve_rva(0x04712558));
            }
            return cache;
        }
        inline app::InternalFE__Class* get_class() {
            return il2cpp::get_class<app::InternalFE__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
        }
        inline app::InternalFE* create() {
            return il2cpp::create_object<app::InternalFE>(get_class());
        }
    } // namespace InternalFE
} // namespace app::classes::types

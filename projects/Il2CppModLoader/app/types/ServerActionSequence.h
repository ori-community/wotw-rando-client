#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerActionSequence {
        namespace {
            inline app::ServerActionSequence__Class* type_info_ref = nullptr;
        }
        inline app::ServerActionSequence__Class** type_info = &type_info_ref;
        inline app::ServerActionSequence__Class* get_class() {
            return il2cpp::get_class<app::ServerActionSequence__Class>(type_info, "", "ServerActionSequence");
        }
        inline app::ServerActionSequence* create() {
            return il2cpp::create_object<app::ServerActionSequence>(get_class());
        }
    } // namespace ServerActionSequence
} // namespace app::classes::types

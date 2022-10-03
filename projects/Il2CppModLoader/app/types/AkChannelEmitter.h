#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkChannelEmitter {
        namespace {
            app::AkChannelEmitter__Class* type_info_ref = nullptr;
        }
        app::AkChannelEmitter__Class** type_info = &type_info_ref;
        inline app::AkChannelEmitter__Class* get_class() {
            return il2cpp::get_class<app::AkChannelEmitter__Class>(type_info, "", "AkChannelEmitter");
        }
        inline app::AkChannelEmitter* create() {
            return il2cpp::create_object<app::AkChannelEmitter>(get_class());
        }
    } // namespace AkChannelEmitter
} // namespace app::classes::types

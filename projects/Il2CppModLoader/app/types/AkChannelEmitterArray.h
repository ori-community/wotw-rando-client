#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkChannelEmitterArray {
        namespace {
            app::AkChannelEmitterArray__Class* type_info_ref = nullptr;
        }
        app::AkChannelEmitterArray__Class** type_info = &type_info_ref;
        inline app::AkChannelEmitterArray__Class* get_class() {
            return il2cpp::get_class<app::AkChannelEmitterArray__Class>(type_info, "", "AkChannelEmitterArray");
        }
        inline app::AkChannelEmitterArray* create() {
            return il2cpp::create_object<app::AkChannelEmitterArray>(get_class());
        }
    } // namespace AkChannelEmitterArray
} // namespace app::classes::types

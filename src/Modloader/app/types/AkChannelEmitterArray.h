#pragma once
#include <Modloader/app/structs/AkChannelEmitterArray.h>
#include <Modloader/app/structs/AkChannelEmitterArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkChannelEmitterArray {
        inline app::AkChannelEmitterArray__Class** type_info() {
            static app::AkChannelEmitterArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkChannelEmitterArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkChannelEmitterArray__Class* get_class() {
            return il2cpp::get_class<app::AkChannelEmitterArray__Class>(type_info(), "", "AkChannelEmitterArray");
        }
        inline app::AkChannelEmitterArray* create() {
            return il2cpp::create_object<app::AkChannelEmitterArray>(get_class());
        }
    } // namespace AkChannelEmitterArray
} // namespace app::classes::types

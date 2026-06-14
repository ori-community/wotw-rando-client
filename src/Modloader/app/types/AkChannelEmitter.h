#pragma once
#include <Modloader/app/structs/AkChannelEmitter.h>
#include <Modloader/app/structs/AkChannelEmitter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkChannelEmitter {
        inline app::AkChannelEmitter__Class** type_info() {
            static app::AkChannelEmitter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkChannelEmitter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkChannelEmitter__Class* get_class() {
            return il2cpp::get_class<app::AkChannelEmitter__Class>(type_info(), "", "AkChannelEmitter");
        }
        inline app::AkChannelEmitter* create() {
            return il2cpp::create_object<app::AkChannelEmitter>(get_class());
        }
    } // namespace AkChannelEmitter
} // namespace app::classes::types

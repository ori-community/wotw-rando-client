#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkChannelEmitterArray {
        namespace {
            inline app::AkChannelEmitterArray__Class* type_info_ref = nullptr;
        }
        inline app::AkChannelEmitterArray__Class** type_info = &type_info_ref;
        inline app::AkChannelEmitterArray__Class* get_class() {
            return il2cpp::get_class<app::AkChannelEmitterArray__Class>(type_info, "", "AkChannelEmitterArray");
        }
        inline app::AkChannelEmitterArray* create() {
            return il2cpp::create_object<app::AkChannelEmitterArray>(get_class());
        }
    } // namespace AkChannelEmitterArray
} // namespace app::classes::types

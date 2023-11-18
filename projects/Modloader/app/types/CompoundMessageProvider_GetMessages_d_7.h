#pragma once
#include <Modloader/app/structs/CompoundMessageProvider_GetMessages_d_7.h>
#include <Modloader/app/structs/CompoundMessageProvider_GetMessages_d_7__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundMessageProvider_GetMessages_d_7 {
        inline app::CompoundMessageProvider_GetMessages_d_7__Class** type_info() {
            static app::CompoundMessageProvider_GetMessages_d_7__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompoundMessageProvider_GetMessages_d_7__Class**)(modloader::win::memory::resolve_rva(0x0471CB28));
            }
            return cache;
        }
        inline app::CompoundMessageProvider_GetMessages_d_7__Class* get_class() {
            return il2cpp::get_nested_class<app::CompoundMessageProvider_GetMessages_d_7__Class>(type_info(), "", "CompoundMessageProvider", "<GetMessages>d__7");
        }
        inline app::CompoundMessageProvider_GetMessages_d_7* create() {
            return il2cpp::create_object<app::CompoundMessageProvider_GetMessages_d_7>(get_class());
        }
    } // namespace CompoundMessageProvider_GetMessages_d_7
} // namespace app::classes::types

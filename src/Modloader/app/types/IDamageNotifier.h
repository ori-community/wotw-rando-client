#pragma once
#include <Modloader/app/structs/IDamageNotifier.h>
#include <Modloader/app/structs/IDamageNotifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDamageNotifier {
        inline app::IDamageNotifier__Class** type_info() {
            static app::IDamageNotifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDamageNotifier__Class**)(modloader::win::memory::resolve_rva(0x04773640));
            }
            return cache;
        }
        inline app::IDamageNotifier__Class* get_class() {
            return il2cpp::get_class<app::IDamageNotifier__Class>(type_info(), "", "IDamageNotifier");
        }
    } // namespace IDamageNotifier
} // namespace app::classes::types

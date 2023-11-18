#pragma once
#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer.h>
#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolTimeslicedPrewarmer {
        inline app::UberPoolTimeslicedPrewarmer__Class** type_info() {
            static app::UberPoolTimeslicedPrewarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolTimeslicedPrewarmer__Class**)(modloader::win::memory::resolve_rva(0x04729928));
            }
            return cache;
        }
        inline app::UberPoolTimeslicedPrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberPoolTimeslicedPrewarmer__Class>(type_info(), "", "UberPoolTimeslicedPrewarmer");
        }
        inline app::UberPoolTimeslicedPrewarmer* create() {
            return il2cpp::create_object<app::UberPoolTimeslicedPrewarmer>(get_class());
        }
    } // namespace UberPoolTimeslicedPrewarmer
} // namespace app::classes::types

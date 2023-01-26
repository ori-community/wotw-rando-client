#pragma once
#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer_c.h>
#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolTimeslicedPrewarmer_c {
        inline app::UberPoolTimeslicedPrewarmer_c__Class** type_info() {
            static app::UberPoolTimeslicedPrewarmer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolTimeslicedPrewarmer_c__Class**)(modloader::win::memory::resolve_rva(0x0471D0A8));
            }
            return cache;
        }
        inline app::UberPoolTimeslicedPrewarmer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolTimeslicedPrewarmer_c__Class>(type_info(), "", "UberPoolTimeslicedPrewarmer", "<>c");
        }
        inline app::UberPoolTimeslicedPrewarmer_c* create() {
            return il2cpp::create_object<app::UberPoolTimeslicedPrewarmer_c>(get_class());
        }
    } // namespace UberPoolTimeslicedPrewarmer_c
} // namespace app::classes::types

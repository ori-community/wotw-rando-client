#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer_c__Class.h>
#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer_c.h>

namespace app::classes::types {
    namespace UberPoolTimeslicedPrewarmer_c {
        inline app::UberPoolTimeslicedPrewarmer_c__Class** type_info = (app::UberPoolTimeslicedPrewarmer_c__Class**)(modloader::win::memory::resolve_rva(0x0471D0A8));
        inline app::UberPoolTimeslicedPrewarmer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolTimeslicedPrewarmer_c__Class>(type_info, "", "UberPoolTimeslicedPrewarmer", "<>c");
        }
        inline app::UberPoolTimeslicedPrewarmer_c* create() {
            return il2cpp::create_object<app::UberPoolTimeslicedPrewarmer_c>(get_class());
        }
    } // namespace UberPoolTimeslicedPrewarmer_c
} // namespace app::classes::types

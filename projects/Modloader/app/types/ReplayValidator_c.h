#pragma once
#include <Modloader/app/structs/ReplayValidator_c.h>
#include <Modloader/app/structs/ReplayValidator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_c {
        inline app::ReplayValidator_c__Class** type_info() {
            static app::ReplayValidator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplayValidator_c__Class**)(modloader::win::memory::resolve_rva(0x04723E78));
            }
            return cache;
        }
        inline app::ReplayValidator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_c__Class>(type_info(), "Moon.Race", "ReplayValidator", "<>c");
        }
        inline app::ReplayValidator_c* create() {
            return il2cpp::create_object<app::ReplayValidator_c>(get_class());
        }
    } // namespace ReplayValidator_c
} // namespace app::classes::types

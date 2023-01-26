#pragma once
#include <Modloader/app/structs/NegativeScaleFixer_c.h>
#include <Modloader/app/structs/NegativeScaleFixer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegativeScaleFixer_c {
        inline app::NegativeScaleFixer_c__Class** type_info() {
            static app::NegativeScaleFixer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegativeScaleFixer_c__Class**)(modloader::win::memory::resolve_rva(0x0472A368));
            }
            return cache;
        }
        inline app::NegativeScaleFixer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NegativeScaleFixer_c__Class>(type_info(), "", "NegativeScaleFixer", "<>c");
        }
        inline app::NegativeScaleFixer_c* create() {
            return il2cpp::create_object<app::NegativeScaleFixer_c>(get_class());
        }
    } // namespace NegativeScaleFixer_c
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/MantisGrayboxEntity_c.h>
#include <Modloader/app/structs/MantisGrayboxEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisGrayboxEntity_c {
        inline app::MantisGrayboxEntity_c__Class** type_info() {
            static app::MantisGrayboxEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MantisGrayboxEntity_c__Class**)(modloader::win::memory::resolve_rva(0x0477A1A0));
            }
            return cache;
        }
        inline app::MantisGrayboxEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisGrayboxEntity_c__Class>(type_info(), "", "MantisGrayboxEntity", "<>c");
        }
        inline app::MantisGrayboxEntity_c* create() {
            return il2cpp::create_object<app::MantisGrayboxEntity_c>(get_class());
        }
    } // namespace MantisGrayboxEntity_c
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/BuilderEntity_c.h>
#include <Modloader/app/structs/BuilderEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderEntity_c {
        inline app::BuilderEntity_c__Class** type_info() {
            static app::BuilderEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047542A8));
            }
            return cache;
        }
        inline app::BuilderEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderEntity_c__Class>(type_info(), "", "BuilderEntity", "<>c");
        }
        inline app::BuilderEntity_c* create() {
            return il2cpp::create_object<app::BuilderEntity_c>(get_class());
        }
    } // namespace BuilderEntity_c
} // namespace app::classes::types

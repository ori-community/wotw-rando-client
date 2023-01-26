#pragma once
#include <Modloader/app/structs/BuilderItem_c.h>
#include <Modloader/app/structs/BuilderItem_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderItem_c {
        inline app::BuilderItem_c__Class** type_info() {
            static app::BuilderItem_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderItem_c__Class**)(modloader::win::memory::resolve_rva(0x0478D920));
            }
            return cache;
        }
        inline app::BuilderItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderItem_c__Class>(type_info(), "", "BuilderItem", "<>c");
        }
        inline app::BuilderItem_c* create() {
            return il2cpp::create_object<app::BuilderItem_c>(get_class());
        }
    } // namespace BuilderItem_c
} // namespace app::classes::types

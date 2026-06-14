#pragma once
#include <Modloader/app/structs/BuilderInfo_c.h>
#include <Modloader/app/structs/BuilderInfo_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderInfo_c {
        inline app::BuilderInfo_c__Class** type_info() {
            static app::BuilderInfo_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderInfo_c__Class**)(modloader::win::memory::resolve_rva(0x0475B990));
            }
            return cache;
        }
        inline app::BuilderInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderInfo_c__Class>(type_info(), "", "BuilderInfo", "<>c");
        }
        inline app::BuilderInfo_c* create() {
            return il2cpp::create_object<app::BuilderInfo_c>(get_class());
        }
    } // namespace BuilderInfo_c
} // namespace app::classes::types

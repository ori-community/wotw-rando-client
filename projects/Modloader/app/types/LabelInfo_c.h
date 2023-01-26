#pragma once
#include <Modloader/app/structs/LabelInfo_c.h>
#include <Modloader/app/structs/LabelInfo_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelInfo_c {
        inline app::LabelInfo_c__Class** type_info() {
            static app::LabelInfo_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LabelInfo_c__Class**)(modloader::win::memory::resolve_rva(0x0475FC70));
            }
            return cache;
        }
        inline app::LabelInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LabelInfo_c__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LabelInfo", "<>c");
        }
        inline app::LabelInfo_c* create() {
            return il2cpp::create_object<app::LabelInfo_c>(get_class());
        }
    } // namespace LabelInfo_c
} // namespace app::classes::types

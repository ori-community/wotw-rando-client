#pragma once
#include <Modloader/app/structs/SeinBlazeSpell_BlazeTypes__Enum.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BlazeTypes__Enum {
        inline app::SeinBlazeSpell_BlazeTypes__Enum__Class** type_info() {
            static app::SeinBlazeSpell_BlazeTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBlazeSpell_BlazeTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBlazeSpell_BlazeTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_BlazeTypes__Enum__Class>(type_info(), "", "SeinBlazeSpell", "BlazeTypes");
        }
        inline app::SeinBlazeSpell_BlazeTypes__Enum* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BlazeTypes__Enum>(get_class());
        }
    } // namespace SeinBlazeSpell_BlazeTypes__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeTypes__Enum__Class.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeTypes__Enum.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BlazeTypes__Enum {
        namespace {
            inline app::SeinBlazeSpell_BlazeTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinBlazeSpell_BlazeTypes__Enum__Class** type_info = &type_info_ref;
        inline app::SeinBlazeSpell_BlazeTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_BlazeTypes__Enum__Class>(type_info, "", "SeinBlazeSpell", "BlazeTypes");
        }
        inline app::SeinBlazeSpell_BlazeTypes__Enum* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BlazeTypes__Enum>(get_class());
        }
    } // namespace SeinBlazeSpell_BlazeTypes__Enum
} // namespace app::classes::types

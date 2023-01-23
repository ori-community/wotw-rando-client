#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Robin__Class.h>
#include <Modloader/app/structs/Robin.h>

namespace app::classes::types {
    namespace Robin {
        namespace {
            inline app::Robin__Class* type_info_ref = nullptr;
        }
        inline app::Robin__Class** type_info = &type_info_ref;
        inline app::Robin__Class* get_class() {
            return il2cpp::get_class<app::Robin__Class>(type_info, "Moon.Hacks", "Robin");
        }
        inline app::Robin* create() {
            return il2cpp::create_object<app::Robin>(get_class());
        }
    } // namespace Robin
} // namespace app::classes::types

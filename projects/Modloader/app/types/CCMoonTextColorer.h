#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCMoonTextColorer {
        namespace {
            inline app::CCMoonTextColorer__Class* type_info_ref = nullptr;
        }
        inline app::CCMoonTextColorer__Class** type_info = &type_info_ref;
        inline app::CCMoonTextColorer__Class* get_class() {
            return il2cpp::get_class<app::CCMoonTextColorer__Class>(type_info, "", "CCMoonTextColorer");
        }
        inline app::CCMoonTextColorer* create() {
            return il2cpp::create_object<app::CCMoonTextColorer>(get_class());
        }
    } // namespace CCMoonTextColorer
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoStateSelector__Class.h>
#include <Modloader/app/structs/SkeetoStateSelector.h>

namespace app::classes::types {
    namespace SkeetoStateSelector {
        namespace {
            inline app::SkeetoStateSelector__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoStateSelector__Class** type_info = &type_info_ref;
        inline app::SkeetoStateSelector__Class* get_class() {
            return il2cpp::get_class<app::SkeetoStateSelector__Class>(type_info, "", "SkeetoStateSelector");
        }
        inline app::SkeetoStateSelector* create() {
            return il2cpp::create_object<app::SkeetoStateSelector>(get_class());
        }
    } // namespace SkeetoStateSelector
} // namespace app::classes::types

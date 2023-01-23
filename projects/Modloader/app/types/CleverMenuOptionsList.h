#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverMenuOptionsList__Class.h>
#include <Modloader/app/structs/CleverMenuOptionsList.h>

namespace app::classes::types {
    namespace CleverMenuOptionsList {
        namespace {
            inline app::CleverMenuOptionsList__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuOptionsList__Class** type_info = &type_info_ref;
        inline app::CleverMenuOptionsList__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuOptionsList__Class>(type_info, "", "CleverMenuOptionsList");
        }
        inline app::CleverMenuOptionsList* create() {
            return il2cpp::create_object<app::CleverMenuOptionsList>(get_class());
        }
    } // namespace CleverMenuOptionsList
} // namespace app::classes::types

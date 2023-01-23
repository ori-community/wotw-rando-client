#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameObjectActivator__Class.h>
#include <Modloader/app/structs/GameObjectActivator.h>

namespace app::classes::types {
    namespace GameObjectActivator {
        namespace {
            inline app::GameObjectActivator__Class* type_info_ref = nullptr;
        }
        inline app::GameObjectActivator__Class** type_info = &type_info_ref;
        inline app::GameObjectActivator__Class* get_class() {
            return il2cpp::get_class<app::GameObjectActivator__Class>(type_info, "", "GameObjectActivator");
        }
        inline app::GameObjectActivator* create() {
            return il2cpp::create_object<app::GameObjectActivator>(get_class());
        }
    } // namespace GameObjectActivator
} // namespace app::classes::types

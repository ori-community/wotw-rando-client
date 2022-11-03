#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_GameObjectVisitor {
        inline app::DynamicInstantiationScanner_GameObjectVisitor__Class** type_info = (app::DynamicInstantiationScanner_GameObjectVisitor__Class**)(modloader::win::memory::resolve_rva(0x0476B748));
        inline app::DynamicInstantiationScanner_GameObjectVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_GameObjectVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "GameObjectVisitor");
        }
        inline app::DynamicInstantiationScanner_GameObjectVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_GameObjectVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_GameObjectVisitor
} // namespace app::classes::types

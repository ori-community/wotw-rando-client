#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerInstantiateAction_InstantiateActionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerInstantiateAction_InstantiateActionData__Class** type_info;
        inline app::ServerInstantiateAction_InstantiateActionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerInstantiateAction_InstantiateActionData__Class>(type_info, "", "ServerInstantiateAction", "InstantiateActionData");
        }
        inline app::ServerInstantiateAction_InstantiateActionData* create() {
            return il2cpp::create_object<app::ServerInstantiateAction_InstantiateActionData>(get_class());
        }
        inline app::ServerInstantiateAction_InstantiateActionData__Boxed* box(app::ServerInstantiateAction_InstantiateActionData value) {
            return il2cpp::box_value<app::ServerInstantiateAction_InstantiateActionData__Boxed>(get_class(), value);
        }
    } // namespace ServerInstantiateAction_InstantiateActionData
} // namespace app::classes::types

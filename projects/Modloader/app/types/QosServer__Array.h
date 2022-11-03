#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QosServer__Array {
        namespace {
            inline app::QosServer__Array__Class* type_info_ref = nullptr;
        }
        inline app::QosServer__Array__Class** type_info = &type_info_ref;
        inline app::QosServer__Array__Class* get_class() {
            return il2cpp::get_class<app::QosServer__Array__Class>(type_info, "PlayFab.MultiplayerModels", "QosServer[]");
        }
        inline app::QosServer__Array* create() {
            return il2cpp::create_object<app::QosServer__Array>(get_class());
        }
    } // namespace QosServer__Array
} // namespace app::classes::types

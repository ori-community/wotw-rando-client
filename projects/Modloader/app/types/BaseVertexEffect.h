#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BaseVertexEffect__Class.h>
#include <Modloader/app/structs/BaseVertexEffect.h>

namespace app::classes::types {
    namespace BaseVertexEffect {
        namespace {
            inline app::BaseVertexEffect__Class* type_info_ref = nullptr;
        }
        inline app::BaseVertexEffect__Class** type_info = &type_info_ref;
        inline app::BaseVertexEffect__Class* get_class() {
            return il2cpp::get_class<app::BaseVertexEffect__Class>(type_info, "UnityEngine.UI", "BaseVertexEffect");
        }
        inline app::BaseVertexEffect* create() {
            return il2cpp::create_object<app::BaseVertexEffect>(get_class());
        }
    } // namespace BaseVertexEffect
} // namespace app::classes::types

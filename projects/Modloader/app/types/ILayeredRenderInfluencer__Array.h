#pragma once
#include <Modloader/app/structs/ILayeredRenderInfluencer__Array.h>
#include <Modloader/app/structs/ILayeredRenderInfluencer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILayeredRenderInfluencer__Array {
        inline app::ILayeredRenderInfluencer__Array__Class** type_info() {
            static app::ILayeredRenderInfluencer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ILayeredRenderInfluencer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ILayeredRenderInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::ILayeredRenderInfluencer__Array__Class>(type_info(), "Moon.Rendering", "ILayeredRenderInfluencer[]");
        }
        inline app::ILayeredRenderInfluencer__Array* create() {
            return il2cpp::create_object<app::ILayeredRenderInfluencer__Array>(get_class());
        }
    } // namespace ILayeredRenderInfluencer__Array
} // namespace app::classes::types

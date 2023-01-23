#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ILayeredRenderInfluencer__Array__Class.h>
#include <Modloader/app/structs/ILayeredRenderInfluencer__Array.h>

namespace app::classes::types {
    namespace ILayeredRenderInfluencer__Array {
        namespace {
            inline app::ILayeredRenderInfluencer__Array__Class* type_info_ref = nullptr;
        }
        inline app::ILayeredRenderInfluencer__Array__Class** type_info = &type_info_ref;
        inline app::ILayeredRenderInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::ILayeredRenderInfluencer__Array__Class>(type_info, "Moon.Rendering", "ILayeredRenderInfluencer[]");
        }
        inline app::ILayeredRenderInfluencer__Array* create() {
            return il2cpp::create_object<app::ILayeredRenderInfluencer__Array>(get_class());
        }
    } // namespace ILayeredRenderInfluencer__Array
} // namespace app::classes::types

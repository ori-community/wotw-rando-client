#pragma once
#include <Modloader/app/structs/ISliceRenderSettingsInfluencer__Array.h>
#include <Modloader/app/structs/ISliceRenderSettingsInfluencer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISliceRenderSettingsInfluencer__Array {
        inline app::ISliceRenderSettingsInfluencer__Array__Class** type_info() {
            static app::ISliceRenderSettingsInfluencer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISliceRenderSettingsInfluencer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISliceRenderSettingsInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::ISliceRenderSettingsInfluencer__Array__Class>(type_info(), "Moon.Rendering", "ISliceRenderSettingsInfluencer[]");
        }
        inline app::ISliceRenderSettingsInfluencer__Array* create() {
            return il2cpp::create_object<app::ISliceRenderSettingsInfluencer__Array>(get_class());
        }
    } // namespace ISliceRenderSettingsInfluencer__Array
} // namespace app::classes::types

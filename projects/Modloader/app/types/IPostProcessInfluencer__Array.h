#pragma once
#include <Modloader/app/structs/IPostProcessInfluencer__Array.h>
#include <Modloader/app/structs/IPostProcessInfluencer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPostProcessInfluencer__Array {
        inline app::IPostProcessInfluencer__Array__Class** type_info() {
            static app::IPostProcessInfluencer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPostProcessInfluencer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPostProcessInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencer__Array__Class>(type_info(), "", "IPostProcessInfluencer[]");
        }
        inline app::IPostProcessInfluencer__Array* create() {
            return il2cpp::create_object<app::IPostProcessInfluencer__Array>(get_class());
        }
    } // namespace IPostProcessInfluencer__Array
} // namespace app::classes::types

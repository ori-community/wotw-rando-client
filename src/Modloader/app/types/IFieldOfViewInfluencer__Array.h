#pragma once
#include <Modloader/app/structs/IFieldOfViewInfluencer__Array.h>
#include <Modloader/app/structs/IFieldOfViewInfluencer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFieldOfViewInfluencer__Array {
        inline app::IFieldOfViewInfluencer__Array__Class** type_info() {
            static app::IFieldOfViewInfluencer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IFieldOfViewInfluencer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IFieldOfViewInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::IFieldOfViewInfluencer__Array__Class>(type_info(), "", "IFieldOfViewInfluencer[]");
        }
        inline app::IFieldOfViewInfluencer__Array* create() {
            return il2cpp::create_object<app::IFieldOfViewInfluencer__Array>(get_class());
        }
    } // namespace IFieldOfViewInfluencer__Array
} // namespace app::classes::types

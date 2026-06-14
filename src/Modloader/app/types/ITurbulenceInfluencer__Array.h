#pragma once
#include <Modloader/app/structs/ITurbulenceInfluencer__Array.h>
#include <Modloader/app/structs/ITurbulenceInfluencer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITurbulenceInfluencer__Array {
        inline app::ITurbulenceInfluencer__Array__Class** type_info() {
            static app::ITurbulenceInfluencer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITurbulenceInfluencer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITurbulenceInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::ITurbulenceInfluencer__Array__Class>(type_info(), "", "ITurbulenceInfluencer[]");
        }
        inline app::ITurbulenceInfluencer__Array* create() {
            return il2cpp::create_object<app::ITurbulenceInfluencer__Array>(get_class());
        }
    } // namespace ITurbulenceInfluencer__Array
} // namespace app::classes::types

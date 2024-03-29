#pragma once
#include <Modloader/app/structs/CatmullSpline.h>
#include <Modloader/app/structs/CatmullSpline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatmullSpline {
        inline app::CatmullSpline__Class** type_info() {
            static app::CatmullSpline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CatmullSpline__Class**)(modloader::win::memory::resolve_rva(0x04735708));
            }
            return cache;
        }
        inline app::CatmullSpline__Class* get_class() {
            return il2cpp::get_class<app::CatmullSpline__Class>(type_info(), "", "CatmullSpline");
        }
        inline app::CatmullSpline* create() {
            return il2cpp::create_object<app::CatmullSpline>(get_class());
        }
    } // namespace CatmullSpline
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CaptureCollection.h>
#include <Modloader/app/structs/CaptureCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaptureCollection {
        inline app::CaptureCollection__Class** type_info() {
            static app::CaptureCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CaptureCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CaptureCollection__Class* get_class() {
            return il2cpp::get_class<app::CaptureCollection__Class>(type_info(), "System.Text.RegularExpressions", "CaptureCollection");
        }
        inline app::CaptureCollection* create() {
            return il2cpp::create_object<app::CaptureCollection>(get_class());
        }
    } // namespace CaptureCollection
} // namespace app::classes::types

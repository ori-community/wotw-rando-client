#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SliderHandler__Class.h>
#include <Modloader/app/structs/SliderHandler.h>
#include <Modloader/app/structs/SliderHandler__Boxed.h>

namespace app::classes::types {
    namespace SliderHandler {
        namespace {
            inline app::SliderHandler__Class* type_info_ref = nullptr;
        }
        inline app::SliderHandler__Class** type_info = &type_info_ref;
        inline app::SliderHandler__Class* get_class() {
            return il2cpp::get_class<app::SliderHandler__Class>(type_info, "UnityEngine", "SliderHandler");
        }
        inline app::SliderHandler* create() {
            return il2cpp::create_object<app::SliderHandler>(get_class());
        }
        inline app::SliderHandler__Boxed* box(app::SliderHandler value) {
            return il2cpp::box_value<app::SliderHandler__Boxed>(get_class(), value);
        }
    } // namespace SliderHandler
} // namespace app::classes::types

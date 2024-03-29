#pragma once
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request__Array.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request__Boxed.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_Request {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Class** type_info() {
            static app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Class**)(modloader::win::memory::resolve_rva(0x04739A78));
            }
            return cache;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Class* get_class() {
            return il2cpp::get_nested_class<app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Class>(type_info(), "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy", "Request");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_Request>(get_class());
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Boxed* box(app::ExperimentalTransparencyAnimatorSystemStrategy_Request value) {
            return il2cpp::box_value<app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Boxed>(get_class(), value);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* create_array(int size) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array>(get_class(), size);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array* create_array(const std::vector<app::ExperimentalTransparencyAnimatorSystemStrategy_Request>& items) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_Request__Array>(get_class(), items);
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_Request
} // namespace app::classes::types

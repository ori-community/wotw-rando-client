#pragma once
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum.h>
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum {
        inline app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class** type_info() {
            static app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class>(type_info(), "", "ObjectInstantiationCaptureAgent", "ObjectInstantiationHeader");
        }
        inline app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum* create() {
            return il2cpp::create_object<app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum>(get_class());
        }
    } // namespace ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum
} // namespace app::classes::types

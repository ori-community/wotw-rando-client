#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum {
        namespace {
            inline app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class** type_info = &type_info_ref;
        inline app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum__Class>(type_info, "", "ObjectInstantiationCaptureAgent", "ObjectInstantiationHeader");
        }
        inline app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum* create() {
            return il2cpp::create_object<app::ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum>(get_class());
        }
    } // namespace ObjectInstantiationCaptureAgent_ObjectInstantiationHeader__Enum
} // namespace app::classes::types

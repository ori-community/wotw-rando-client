#pragma once
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent.h>
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectInstantiationCaptureAgent {
        inline app::ObjectInstantiationCaptureAgent__Class** type_info() {
            static app::ObjectInstantiationCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectInstantiationCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04730538));
            }
            return cache;
        }
        inline app::ObjectInstantiationCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ObjectInstantiationCaptureAgent__Class>(type_info(), "", "ObjectInstantiationCaptureAgent");
        }
        inline app::ObjectInstantiationCaptureAgent* create() {
            return il2cpp::create_object<app::ObjectInstantiationCaptureAgent>(get_class());
        }
    } // namespace ObjectInstantiationCaptureAgent
} // namespace app::classes::types

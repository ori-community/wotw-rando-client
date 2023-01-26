#pragma once
#include <Modloader/app/structs/IEventPipeline__Array.h>
#include <Modloader/app/structs/IEventPipeline__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEventPipeline__Array {
        inline app::IEventPipeline__Array__Class** type_info() {
            static app::IEventPipeline__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEventPipeline__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEventPipeline__Array__Class* get_class() {
            return il2cpp::get_class<app::IEventPipeline__Array__Class>(type_info(), "PlayFab.Pipeline", "IEventPipeline[]");
        }
        inline app::IEventPipeline__Array* create() {
            return il2cpp::create_object<app::IEventPipeline__Array>(get_class());
        }
    } // namespace IEventPipeline__Array
} // namespace app::classes::types

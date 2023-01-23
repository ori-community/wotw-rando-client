#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IEventPipeline__Array__Class.h>
#include <Modloader/app/structs/IEventPipeline__Array.h>

namespace app::classes::types {
    namespace IEventPipeline__Array {
        namespace {
            inline app::IEventPipeline__Array__Class* type_info_ref = nullptr;
        }
        inline app::IEventPipeline__Array__Class** type_info = &type_info_ref;
        inline app::IEventPipeline__Array__Class* get_class() {
            return il2cpp::get_class<app::IEventPipeline__Array__Class>(type_info, "PlayFab.Pipeline", "IEventPipeline[]");
        }
        inline app::IEventPipeline__Array* create() {
            return il2cpp::create_object<app::IEventPipeline__Array>(get_class());
        }
    } // namespace IEventPipeline__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDebugRendererSubscriber__Array__Class.h>
#include <Modloader/app/structs/IDebugRendererSubscriber__Array.h>

namespace app::classes::types {
    namespace IDebugRendererSubscriber__Array {
        namespace {
            inline app::IDebugRendererSubscriber__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDebugRendererSubscriber__Array__Class** type_info = &type_info_ref;
        inline app::IDebugRendererSubscriber__Array__Class* get_class() {
            return il2cpp::get_class<app::IDebugRendererSubscriber__Array__Class>(type_info, "Moon.VisualDebug", "IDebugRendererSubscriber[]");
        }
        inline app::IDebugRendererSubscriber__Array* create() {
            return il2cpp::create_object<app::IDebugRendererSubscriber__Array>(get_class());
        }
    } // namespace IDebugRendererSubscriber__Array
} // namespace app::classes::types

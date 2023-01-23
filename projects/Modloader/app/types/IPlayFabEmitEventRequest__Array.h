#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest__Array__Class.h>
#include <Modloader/app/structs/IPlayFabEmitEventRequest__Array.h>

namespace app::classes::types {
    namespace IPlayFabEmitEventRequest__Array {
        namespace {
            inline app::IPlayFabEmitEventRequest__Array__Class* type_info_ref = nullptr;
        }
        inline app::IPlayFabEmitEventRequest__Array__Class** type_info = &type_info_ref;
        inline app::IPlayFabEmitEventRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEmitEventRequest__Array__Class>(type_info, "PlayFab", "IPlayFabEmitEventRequest[]");
        }
        inline app::IPlayFabEmitEventRequest__Array* create() {
            return il2cpp::create_object<app::IPlayFabEmitEventRequest__Array>(get_class());
        }
    } // namespace IPlayFabEmitEventRequest__Array
} // namespace app::classes::types

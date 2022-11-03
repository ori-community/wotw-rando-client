#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour {
        namespace {
            inline app::FlutteringTakeOffBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FlutteringTakeOffBehaviour__Class** type_info = &type_info_ref;
        inline app::FlutteringTakeOffBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringTakeOffBehaviour__Class>(type_info, "Moon", "FlutteringTakeOffBehaviour");
        }
        inline app::FlutteringTakeOffBehaviour* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour
} // namespace app::classes::types

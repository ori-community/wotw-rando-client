#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeUpdateCallback {
        namespace {
            inline app::NativeUpdateCallback__Class* type_info_ref = nullptr;
        }
        inline app::NativeUpdateCallback__Class** type_info = &type_info_ref;
        inline app::NativeUpdateCallback__Class* get_class() {
            return il2cpp::get_class<app::NativeUpdateCallback__Class>(type_info, "UnityEngineInternal.Input", "NativeUpdateCallback");
        }
        inline app::NativeUpdateCallback* create() {
            return il2cpp::create_object<app::NativeUpdateCallback>(get_class());
        }
    } // namespace NativeUpdateCallback
} // namespace app::classes::types

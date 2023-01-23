#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver__Array__Class.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver__Array.h>

namespace app::classes::types {
    namespace ICleverMenuFadeObserver__Array {
        namespace {
            inline app::ICleverMenuFadeObserver__Array__Class* type_info_ref = nullptr;
        }
        inline app::ICleverMenuFadeObserver__Array__Class** type_info = &type_info_ref;
        inline app::ICleverMenuFadeObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ICleverMenuFadeObserver__Array__Class>(type_info, "", "ICleverMenuFadeObserver[]");
        }
        inline app::ICleverMenuFadeObserver__Array* create() {
            return il2cpp::create_object<app::ICleverMenuFadeObserver__Array>(get_class());
        }
    } // namespace ICleverMenuFadeObserver__Array
} // namespace app::classes::types
